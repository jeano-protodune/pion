#define PionAna_cxx
#include "PionAna.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TLegend.h>
#include <iostream>
//Test of creating a function method
/*
int PionAna::Test(){
  return 2;
}
*/
//Function to determine prcoess that created the pion





PionAna::pionCat PionAna::pionProcess(/*int pionID,*/ std::vector<int> daughterIden){//Return type of process (of type pionCat, an enum)
  
  std::vector<pionCat> processes; //vector to store process name in order to evaluate which process starts first
  std::vector<double> time; //vector to store time process occurred 
 
  //2 nested for loops to cycle through IDs to find daughter particle by comparing to daughter ID passed in to function
  for(int i=0; i<geant_list_size; i++){
    for(std::size_t j=0; j<daughterIden.size();j++){//std::size as comparison between size of vector
      if(TrackId[i]==daughterIden[j]){
        if(processname->at(i)=="hadElastic"&&atomNumber(pdg[i])>0){//Selection for elastic process
          processes.push_back(elast);//append process to vector
          time.push_back(StartT[i]);//append time to vector
        }
         
        if((pdg[i]==211 && NumberDaughters[i]<=2)||(pdg[i]==-211 && NumberDaughters[i]<=2)){
          processes.push_back(inelast);//append process to vector
          time.push_back(StartT[i]);//append time to vector
        }
        
        else if(pdg[i]==111 && NumberDaughters[i]<=2){//Selection for charge exchange - daughter of pion is a delta 0/+(undetected) then a pion0 with either a neutron(undetected) or a proton       
          processes.push_back(exchange);
          time.push_back(StartT[i]); 
        }
        
        
        
        else if(pdg[i]==-13||pdg[i]==13){//Selection for Pion decay at rest - pion+ >muon + > e+ opposite for pion-
          //Find daughter of the daughter particle 
          std::vector<int> daught_2 = daughterID(TrackId[i]);
          for(int l=0; l<geant_list_size; l++){
            for(std::size_t k=0; k< daught_2.size(); k++){
              if(TrackId[l]==daught_2[k]){
                if(pdg[l]==-11||pdg[l]==11){
                  processes.push_back(rest_decay);
                  time.push_back(StartT[k]); 
                }     
              }    
            } 
          }
        }



      }  
    }  
  }
   //Find earliest time and return process
  double timeArray[time.size()];//convert vector to array to use indexMin 
  std::copy(time.begin(),time.end(), timeArray);
  int indexMinInt =  indexMin(timeArray,time.size());//indexMin returns index of smallest value in the passed array
  //std::cout<<"size of time is "<<time.size()<<std::endl;    
  //std::cout<<"size of processes is "<<processes.size()<<std::endl;    
  //std::cout<<"indexMinInt is "<<indexMinInt<<std::endl;    
  
  for (std::size_t i=0; i<processes.size();i++){//Not sure why this works but it does
    return processes[indexMinInt];
   // std::cout<<processes[i]<<std::endl;
  }
  return undefined; 
}

  
//Return index of smallest element of array
int PionAna::indexMin(double array[], int size){  
  int index = 0;

  for(int i=1; i< size; i++){
    if(array[i] < array[index]){
       index=i;
    }    
  }
 return index;  
} 


int PionAna::atomNumber(int pdg){//Return atomic number of particle given and return 0 if not a nucleus
  
  int atomic_num=0;
  if (pdg>1000000000){ //Selection for nuclei
    atomic_num = (pdg%1000000)/10000;  //Select the first 7 digits by modulo and then cut off the last 3 (this part of the pdg is the atomic number)
  }
 return atomic_num; 
} 


std::vector<int> PionAna::daughterID(int trackID){
  
  std::vector<int> daughters;   
  for(int i=0; i<geant_list_size; i++){
    if(Mother[i]==trackID){
      daughters.push_back(TrackId[i]);
     // std::cout<< daughters.size()<< std::endl;
    }       
  }
  return daughters;
} 

std::vector<int> PionAna::daughterPDG(int trackID){
  
  std::vector<int> daughters;   
  for(int i=0; i<geant_list_size; i++){
    if(Mother[i]==trackID){
      for(int j=0; j<geant_list_size;j++){
        if(TrackId[j]==TrackId[i]){
          daughters.push_back(pdg[j]);
        }  
      }  
    }       
  }
  return daughters;
} 
//Function to return path length of particles
/*std::vector<float_t> PionAna::pathLength(int trackID){
  std::vector<float_t> x;
  std::vector<float_t> y;
  std::vector<float_t> z;
  
  for(int i=0; i<geant_list_size;i++){
    if(TrackId[i]==trackID){
       x.push_back{StartPointx[i]};
       y.push_back{StartPointy[i]};
       z.push_back{StartPointz[i]};
    }
  } 
}*/

void PionAna::Loop()
{
//   In a ROOT session, you can do:
//      Root > .L PionAna.C
//      Root > PionAna t
//      Root > t.GetEntry(12); // Fill t data members with entry number 12
//      Root > t.Show();       // Show values of entry 12
//      Root > t.Show(16);     // Read and show values of entry 16
//      Root > t.Loop();       // Loop on all entries


//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
//:wq
//METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch

   
   //Hists variables
   int n1 = 10;//Number of primary divisions
   int n2 = 0;//Number of secondary divisions
   int n3 = 0;//Number of tertiary divisions
   int ndiv = n1 + 100*n2 +10000*n3;
   //DECLARE HISTOS here
   TCanvas *c1 = new TCanvas("c1", "c1",600,500);
   gStyle->SetOptStat(11);
   TH1F *my_hist = new TH1F("my_hist","",500,-2,8); 
   TLegend *leg = new TLegend(0.96,0.6,.83,.8);//Legend for hist
   //Attributes of hists
   my_hist->GetXaxis()->SetNdivisions(ndiv);//Set hist divisions
   leg->AddEntry(my_hist,"-1 = Undefined","");
   //leg->AddEntry(my_hist,"0 = Cross","");
   leg->AddEntry(my_hist,"1 = Elast","");
   leg->AddEntry(my_hist,"2 = Inelast","");
   //leg->AddEntry(my_hist,"3 = Absorp","");
   leg->AddEntry(my_hist,"4 = Exchange","");
   //leg->AddEntry(my_hist,"5 = Product","");
   leg->AddEntry(my_hist,"6 = Rest_Dec","");
   //leg->AddEntry(my_hist,"7 = Rest_Capt","");
   leg->SetTextSize(0.02);
   //Load Files
   if (fChain == 0) return;
   Long64_t nentries = fChain->GetEntriesFast();
   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
   if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue
      
      //Test of minArray
      //double minArray[2] = {2,1};
      //std::cout<<indexMin(minArray,2)<<std::endl;

      for(int i=0; i<geant_list_size;i++){ 
        if(pdg[i]==211||pdg[i]==-211){//Pion check  
          std::vector<int> daught(NumberDaughters[i]);
          daught = daughterID(TrackId[i]);
          //std::cout<<atomNumber(pdg[i])<<std::endl;
          //for (std::size_t h=0; h<daught.size();h++){//print out daughters
           /* std::cout<<daught[h]<<std::endl;
            for (int j=0; j<geant_list_size;j++){
              for(std::size_t k=0; k<daught.size();k++){
                if(daught[k]==TrackId[j])
                {
                  
                  std::cout<<"The Track pdg is  "<<pdg[i]<<std::endl;
                  std::cout<<"The number of daughters is  "<<NumberDaughters[i]<<std::endl;
                  std::cout<<"The daughter pdg is  "<<pdg[j]<<std::endl;
                
                }
              } 
            
            }*/
         
          // std::cout<<PionAna::pionProcess(daught)<<std::endl;//Print process type        
           my_hist->Fill(PionAna::pionProcess(daught));
         // }
         
       }
      
     }
       
    // Loop over particles
    for (int i = 0; i < geant_list_size; i++){
       //my_hist->Fill(pdg[i]);//Fill histogram with all particles 
      
       /*Int_t mother_id = Mother[i];//assign the mother IDs (the particle that the particles being looped over were created by) to an int
       if (processname->at(i)=="hadElastic") { //Selection for if the particle was created by elastic scattering 
            //std::cout<<"The PDG of the particle created from hadElastic is " << pdg[i]<<std::endl; 
            
           
           
            //Loop over particles again in order to compare motherID to track ID and find the mothers of the particles that were saved as mother_id - Track ID is ID of all particles
            for (int j = 0; j < geant_list_size; j++){               
               if (mother_id == TrackId[j]&& pdg[j] == 211){ //Selection for finding mother and pion (pdg 211)
                  std::cout<<"The PDG of the particle created from hadElastic is " << pdg[i]<<std::endl; 
                  std::cout<<"-The Mother PDG is "<< pdg[j]<<" Track ID is "<< TrackId[j]<<std::endl; 
                  std::cout<<"--Number of Daughters is " << NumberDaughters[j]<<std::endl;   
                  //std::cout<<"---The Daughter PDG is"<< pdg[i]<<std::endl;
                  
                  //Loop over particles again in order to find daughters of mother j- they will have the same mother_ID
                  for (int k = 0; k < geant_list_size; k++){  
                     if (mother_id == Mother[k]){ //Comparing mother_IDs of particles and printing PDG, track ID and prcoess names for those that ahve the same mother_ID
                        std::cout<<"--The Daughter PDG is "<< pdg[k]<<" Track ID is "<<TrackId[k]<<" Process name is "<<processname->at(k) <<std::endl; 
                        if (pdg[k]>1000000000){ //Selection for nuclei (they have a pdg containing 10 digits in the format plus minus 10LZZZAAAI)                     
                           int nuclear = pdg[k];//set the pdg to an integer to enable maths functions on it
                           int atomic_num;
                           atomic_num = (nuclear%1000000)/10000;  //Select the first 7 digits by modulo and then cut off the last 3 (this part of the pdg is the atomic number)
                           std::cout<<"--The atomic number of the daughter is " <<atomic_num<<std::endl; //print out the atomic number
                           if (atomic_num==18){
                              
                             //Test(); Test of calling a function that has been made in the header file
                           
                           
                           }

                    } 
                 }
                            
            }
          }
        }      
      }*/
   } 
   my_hist->Draw();
   leg->Draw();
  }
}

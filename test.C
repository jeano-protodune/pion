{
 
/*
  #include "TFile.h"
#include "TTree.h"
#include "TNtuple.h"
#include <cfloat>
#include <string>
#include "TROOT.h"
#include "TChain.h"
#include "TLatex"
#include "TMath.h"
#include <vector>
*/

  //How to run:
  //root -l protoDune_pion_200MeV_mono_JMorris_0_anatree.root ../script/test.C
  //The above command needs to be run from the anatree directory.  You can load file and the script from    anywhere but you need to specify the path to them when passing them to root

/*  
//START X
   //Define Filename
  
   TString fileName = "Hist_Truth_Startx_0";	 
   TString fileLocPdf = "/home/lar/jmorris/anatree/GraphsPdf/";
   //TString fileLocPng = "/home/lar/jmorris/anatree/GraphsPng/";
   TString fileExt = ".pdf";

   
   TString pdf_name = fileLocPdf + fileName + fileExt;
   //std::string png_name = std::string(fileLocPng) + std::string(fileName) + std::string(fileExt);

  //move into the analysistree directory
  _file0->cd("analysistree");

  //Making a 1D histogram with float precision
  //The constructor is (string ROOT_histo_name, string title of histogram, int number of bins, double min value of x, double max value of x)
  
  TH1F *hist = new TH1F("my_hist",fileName,100,-50,250);
  //cd into the files "analysistree" directory
  //Draw variable P*P in the anatree tree and dump the contents into the histogram we called "my_hist"
  //You can look up what the variable names are by opening and TBrowser and looking at the tree.  The names need to be exactly the same as the ones you see in the TBrowser
  anatree->Draw("(StartPointx) >> my_hist");
  

  //Finally, draw the histogram

  hist->Draw();
  
  hist->GetXaxis()->SetTitle("Starting X Position");
  hist->GetYaxis()->SetTitle("Events");
  //Save file	
  //hist->SaveAs(png_name.c_str());
  hist->SaveAs(pdf_name);
*/
 //Refined code
  
  //Shows Overflow and undeflow in stats box
  gStyle->SetOptStat(111111);
  
  //Create a TChain which is a chain of ttrees and tell it the location of the ttree in each of the root files
  TChain chain("analysistree/anatree");
  chain.Add("/home/lar/jmorris/anatree/*.root");

  //Define number of histograms to be made - for this 2 for x and y positions
  const int n_hist = 7;
  //Define file location and type of file
  TString fileLocPdf = "/home/lar/jmorris/anatree/GraphsPdf/";//Location in local computer
  TString fileExt = ".pdf";
  TString fileLocWeb = "/home/lar/jmorris/public_html/graphs_pion_pdf/";
  //Array of histograms
  TH1F *hist[n_hist];
  //Move in to folder - not needed with TChain
  //_file0->cd("analysistree");

  // Creating arrays for file names, draw variables, axes title, min and max values for hist and bins
  TString fileName[n_hist];
  TString drawVar[n_hist];
  TString axes_title_x[n_hist];
  TString axes_title_y[n_hist];
  double min[n_hist];
  double max[n_hist];
  int bins[n_hist];
  
  //Define histograms by inserting info into arrays - file name, draw variable (name in tree in TBrowser), axes titles and min and max values to be shown in histogram (manually chosen)
  //Define StartPositionx histogram
  fileName[0] = "Hist_Truth_Startx_0"; //Define X file name within array
  drawVar[0] = "StartPointx"; // Define draw varibales
  axes_title_x[0] = "Starting X Position";
  axes_title_y[0] = "Number Of Events";
  min[0] = -150;
  max[0]= 350;
  bins[0]=120;
  //Define StartPositiony histogram
  fileName[1] = "Hist_Truth_Starty_0"; //Define X file name within array
  drawVar[1] = "StartPointy"; // Define draw varibales
  axes_title_x[1] = "Starting Y Position";
  axes_title_y[1] = "Number Of Events";   
  min[1] = 100;
  max[1]= 600;
  bins[1]=120;
  //Define StartPositionz histogram
  fileName[2] = "Hist_Truth_Startz_0"; //Define X file name within array
  drawVar[2] = "StartPointz"; // Define draw varibales
  axes_title_x[2] = "Starting Z Position";
  axes_title_y[2] = "Number Of Events";
  min[2] = -250;
  max[2]= 500;
  bins[2]=120;
  //Define EndPositionx histogram
  fileName[3] = "Hist_Truth_Endx_0"; //Define X file name within array
  drawVar[3] = "EndPointx"; // Define draw varibales
  axes_title_x[3] = "Ending X Position";
  axes_title_y[3] = "Number Of Events"; 
  min[3] = -200;
  max[3]= 400;
  bins[3]=120;
  //Define EndPositiony histogram
  fileName[4] = "Hist_Truth_Endy_0"; //Define X file name within array
  drawVar[4] = "EndPointy"; // Define draw varibales
  axes_title_x[4] = "Ending Y Position";
  axes_title_y[4] = "Number Of Events";  
  min[4] = 0;
  max[4]= 650;  
  bins[4]=120;
  //Define EndPositionz histogram
  fileName[5] = "Hist_Truth_Endz_0"; //Define X file name within array
  drawVar[5] = "EndPointz"; // Define draw varibales
  axes_title_x[5] = "Ending Z Position";
  axes_title_y[5] = "Number Of Events";
  min[5] = -350;
  max[5]= 300;
  bins[5]=120;
  //Define PDG histogram
  fileName[6] = "Hist_pdg"; //Define X file name within array
  drawVar[6] = "pdg"; // Define draw varibales
  axes_title_x[6] = "pdg number";
  axes_title_y[6] = "Number Of Events";
  min[6] = -300;
  max[6]= 300;
  bins[6]=2000;

  //Create TCanvas
  TCanvas c1("c1","c1");

  //Define Min Max

  //For loop for creating histograms for x,y,z starting points
  for(int i=0; i<n_hist; i++ )
  { 
    //Create histogram and set axes title
    hist[i]= new TH1F(fileName[i],fileName[i],bins[i],min[i],max[i]);
    //hist[i]->SetBit(TH1::kCanRebin);//Automatic binning
    hist[i]->GetXaxis()->SetTitle(axes_title_x[i]);
    hist[i]->GetYaxis()->SetTitle(axes_title_y[i]);
    //Define draw variable and draw histogram
    TString draw = drawVar[i] + ">>" + fileName[i];
    //Use chain instead of anatree
    //anatree->Draw(draw);
    chain->Draw(draw);
    //Define location for saving file and save file as pdf
    TString pdfName = fileLocPdf + fileName[i] + fileExt;//folder name(GraphsPdf folder in anatree) and file name and extension
    TString webName = fileLocWeb + fileName[i] + fileExt;//folder name(public_html in jmorris) and file name and extension

    hist[i]->Draw();
    c1.SaveAs(pdfName);//save to GraphsPDf
    c1.SaveAs(webName);//save to web


  }

 
}

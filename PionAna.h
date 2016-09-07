//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Aug 16 14:42:27 2016 by ROOT version 5.34/32
// from TTree anatree/analysis tree
// found on file: ../anatree/protoDune_pion_200MeV_mono_JMorris_All_anatree.root
//////////////////////////////////////////////////////////

#ifndef PionAna_h
#define PionAna_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include <vector>
#include <string>

// Fixed size dimensions of array or collections stored in the TTree if any.

class PionAna {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Int_t           run;
   Int_t           subrun;
   Int_t           event;
   Double_t        evttime;
   Double_t        beamtime;
   Double_t        pot;
   Char_t          isdata;
   Double_t        taulife;
   UInt_t          triggernumber;
   Double_t        triggertime;
   Double_t        beamgatetime;
   UInt_t          triggerbits;
   Double_t        potbnb;
   Double_t        potnumitgt;
   Double_t        potnumi101;
   Int_t           no_hits;
   Int_t           no_hits_stored;
   Short_t         hit_tpc[382];   //[no_hits_stored]
   Short_t         hit_plane[382];   //[no_hits_stored]
   Short_t         hit_wire[382];   //[no_hits_stored]
   Short_t         hit_channel[382];   //[no_hits_stored]
   Float_t         hit_peakT[382];   //[no_hits_stored]
   Float_t         hit_charge[382];   //[no_hits_stored]
   Float_t         hit_ph[382];   //[no_hits_stored]
   Float_t         hit_startT[382];   //[no_hits_stored]
   Float_t         hit_endT[382];   //[no_hits_stored]
   Float_t         hit_rms[382];   //[no_hits_stored]
   Float_t         hit_trueX[382];   //[no_hits_stored]
   Float_t         hit_goodnessOfFit[382];   //[no_hits_stored]
   Short_t         hit_multiplicity[382];   //[no_hits_stored]
   Short_t         hit_trkid[382];   //[no_hits_stored]
   Short_t         hit_trkKey[382];   //[no_hits_stored]
   Short_t         hit_clusterid[382];   //[no_hits_stored]
   Short_t         hit_clusterKey[382];   //[no_hits_stored]
   Float_t         hit_nelec[382];   //[no_hits_stored]
   Float_t         hit_energy[382];   //[no_hits_stored]
   Short_t         nclusters;
   Short_t         clusterId[31];   //[nclusters]
   Short_t         clusterView[31];   //[nclusters]
   Float_t         cluster_StartCharge[31];   //[nclusters]
   Float_t         cluster_StartAngle[31];   //[nclusters]
   Float_t         cluster_EndCharge[31];   //[nclusters]
   Float_t         cluster_EndAngle[31];   //[nclusters]
   Float_t         cluster_Integral[31];   //[nclusters]
   Float_t         cluster_IntegralAverage[31];   //[nclusters]
   Float_t         cluster_SummedADC[31];   //[nclusters]
   Float_t         cluster_SummedADCaverage[31];   //[nclusters]
   Float_t         cluster_MultipleHitDensity[31];   //[nclusters]
   Float_t         cluster_Width[31];   //[nclusters]
   Short_t         cluster_NHits[31];   //[nclusters]
   Short_t         cluster_StartWire[31];   //[nclusters]
   Short_t         cluster_StartTick[31];   //[nclusters]
   Short_t         cluster_EndWire[31];   //[nclusters]
   Short_t         cluster_EndTick[31];   //[nclusters]
   Short_t         cluncosmictags_tagger[31];   //[nclusters]
   Float_t         clucosmicscore_tagger[31];   //[nclusters]
   Short_t         clucosmictype_tagger[31];   //[nclusters]
   Int_t           no_flashes;
   Float_t         flash_time[5];   //[no_flashes]
   Float_t         flash_pe[5];   //[no_flashes]
   Float_t         flash_ycenter[5];   //[no_flashes]
   Float_t         flash_zcenter[5];   //[no_flashes]
   Float_t         flash_ywidth[5];   //[no_flashes]
   Float_t         flash_zwidth[5];   //[no_flashes]
   Float_t         flash_timewidth[5];   //[no_flashes]
   Int_t           no_ExternCounts;
   Float_t         externcounts_time[1];   //[no_ExternCounts]
   Float_t         externcounts_id[1];   //[no_ExternCounts]
   Char_t          kNVertexAlgos;
   Char_t          kNShowerAlgos;
   Int_t           mcevts_truthcry;
   Int_t           cry_no_primaries;
   Int_t           cry_primaries_pdg[1];   //[cry_no_primaries]
   Float_t         cry_Eng[1];   //[cry_no_primaries]
   Float_t         cry_Px[1];   //[cry_no_primaries]
   Float_t         cry_Py[1];   //[cry_no_primaries]
   Float_t         cry_Pz[1];   //[cry_no_primaries]
   Float_t         cry_P[1];   //[cry_no_primaries]
   Float_t         cry_StartPointx[1];   //[cry_no_primaries]
   Float_t         cry_StartPointy[1];   //[cry_no_primaries]
   Float_t         cry_StartPointz[1];   //[cry_no_primaries]
   Float_t         cry_StartPointt[1];   //[cry_no_primaries]
   Int_t           cry_status_code[1];   //[cry_no_primaries]
   Float_t         cry_mass[1];   //[cry_no_primaries]
   Int_t           cry_trackID[1];   //[cry_no_primaries]
   Int_t           cry_ND[1];   //[cry_no_primaries]
   Int_t           cry_mother[1];   //[cry_no_primaries]
   Int_t           no_primaries;
   Int_t           geant_list_size;
   Int_t           geant_list_size_in_tpcAV;
   Int_t           pdg[174];   //[geant_list_size]
   Int_t           status[174];   //[geant_list_size]
   Float_t         Mass[174];   //[geant_list_size]
   Float_t         Eng[174];   //[geant_list_size]
   Float_t         EndE[174];   //[geant_list_size]
   Float_t         Px[174];   //[geant_list_size]
   Float_t         Py[174];   //[geant_list_size]
   Float_t         Pz[174];   //[geant_list_size]
   Float_t         P[174];   //[geant_list_size]
   Float_t         StartPointx[174];   //[geant_list_size]
   Float_t         StartPointy[174];   //[geant_list_size]
   Float_t         StartPointz[174];   //[geant_list_size]
   Float_t         StartT[174];   //[geant_list_size]
   Float_t         EndPointx[174];   //[geant_list_size]
   Float_t         EndPointy[174];   //[geant_list_size]
   Float_t         EndPointz[174];   //[geant_list_size]
   Float_t         EndT[174];   //[geant_list_size]
   Float_t         theta[174];   //[geant_list_size]
   Float_t         phi[174];   //[geant_list_size]
   Float_t         theta_xz[174];   //[geant_list_size]
   Float_t         theta_yz[174];   //[geant_list_size]
   Float_t         pathlen[174];   //[geant_list_size]
   Int_t           inTPCActive[174];   //[geant_list_size]
   Float_t         StartPointx_tpcAV[174];   //[geant_list_size]
   Float_t         StartPointy_tpcAV[174];   //[geant_list_size]
   Float_t         StartPointz_tpcAV[174];   //[geant_list_size]
   Float_t         StartT_tpcAV[174];   //[geant_list_size]
   Float_t         StartE_tpcAV[174];   //[geant_list_size]
   Float_t         StartP_tpcAV[174];   //[geant_list_size]
   Float_t         StartPx_tpcAV[174];   //[geant_list_size]
   Float_t         StartPy_tpcAV[174];   //[geant_list_size]
   Float_t         StartPz_tpcAV[174];   //[geant_list_size]
   Float_t         EndPointx_tpcAV[174];   //[geant_list_size]
   Float_t         EndPointy_tpcAV[174];   //[geant_list_size]
   Float_t         EndPointz_tpcAV[174];   //[geant_list_size]
   Float_t         EndT_tpcAV[174];   //[geant_list_size]
   Float_t         EndE_tpcAV[174];   //[geant_list_size]
   Float_t         EndP_tpcAV[174];   //[geant_list_size]
   Float_t         EndPx_tpcAV[174];   //[geant_list_size]
   Float_t         EndPy_tpcAV[174];   //[geant_list_size]
   Float_t         EndPz_tpcAV[174];   //[geant_list_size]
   Float_t         pathlen_drifted[174];   //[geant_list_size]
   Int_t           inTPCDrifted[174];   //[geant_list_size]
   Float_t         StartPointx_drifted[174];   //[geant_list_size]
   Float_t         StartPointy_drifted[174];   //[geant_list_size]
   Float_t         StartPointz_drifted[174];   //[geant_list_size]
   Float_t         StartE_drifted[174];   //[geant_list_size]
   Float_t         StartT_drifted[174];   //[geant_list_size]
   Float_t         StartP_drifted[174];   //[geant_list_size]
   Float_t         StartPx_drifted[174];   //[geant_list_size]
   Float_t         StartPy_drifted[174];   //[geant_list_size]
   Float_t         StartPz_drifted[174];   //[geant_list_size]
   Float_t         EndPointx_drifted[174];   //[geant_list_size]
   Float_t         EndPointy_drifted[174];   //[geant_list_size]
   Float_t         EndPointz_drifted[174];   //[geant_list_size]
   Float_t         EndT_drifted[174];   //[geant_list_size]
   Float_t         EndE_drifted[174];   //[geant_list_size]
   Float_t         EndP_drifted[174];   //[geant_list_size]
   Float_t         EndPx_drifted[174];   //[geant_list_size]
   Float_t         EndPy_drifted[174];   //[geant_list_size]
   Float_t         EndPz_drifted[174];   //[geant_list_size]
   Int_t           NumberDaughters[174];   //[geant_list_size]
   Int_t           Mother[174];   //[geant_list_size]
   Int_t           TrackId[174];   //[geant_list_size]
   Int_t           MergedId[174];   //[geant_list_size]
   Int_t           origin[174];   //[geant_list_size]
   Int_t           MCTruthIndex[174];   //[geant_list_size]
   Int_t           process_primary[174];   //[geant_list_size]
   vector<string>  *processname;
   Short_t         nshowers_emshower;
   Short_t         showerID_emshower[1];   //[nshowers_emshower]
   Short_t         shwr_bestplane_emshower[1];   //[nshowers_emshower]
   Float_t         shwr_length_emshower[1];   //[nshowers_emshower]
   Float_t         shwr_startdcosx_emshower[1];   //[nshowers_emshower]
   Float_t         shwr_startdcosy_emshower[1];   //[nshowers_emshower]
   Float_t         shwr_startdcosz_emshower[1];   //[nshowers_emshower]
   Float_t         shwr_startx_emshower[1];   //[nshowers_emshower]
   Float_t         shwr_starty_emshower[1];   //[nshowers_emshower]
   Float_t         shwr_startz_emshower[1];   //[nshowers_emshower]
   Float_t         shwr_totEng_emshower[1][3];   //[nshowers_emshower]
   Float_t         shwr_dedx_emshower[1][3];   //[nshowers_emshower]
   Float_t         shwr_mipEng_emshower[1][3];   //[nshowers_emshower]
   Short_t         shwr_hasPFParticle_emshower[1];   //[nshowers_emshower]
   Short_t         shwr_PFParticleID_emshower[1];   //[nshowers_emshower]
   Float_t         shwr_pidmvamu_emshower[1];   //[nshowers_emshower]
   Float_t         shwr_pidmvae_emshower[1];   //[nshowers_emshower]
   Float_t         shwr_pidmvapich_emshower[1];   //[nshowers_emshower]
   Float_t         shwr_pidmvapi0_emshower[1];   //[nshowers_emshower]
   Float_t         shwr_pidmvapr_emshower[1];   //[nshowers_emshower]
   Short_t         nshowers_emshowerdc;
   Short_t         showerID_emshowerdc[1];   //[nshowers_emshowerdc]
   Short_t         shwr_bestplane_emshowerdc[1];   //[nshowers_emshowerdc]
   Float_t         shwr_length_emshowerdc[1];   //[nshowers_emshowerdc]
   Float_t         shwr_startdcosx_emshowerdc[1];   //[nshowers_emshowerdc]
   Float_t         shwr_startdcosy_emshowerdc[1];   //[nshowers_emshowerdc]
   Float_t         shwr_startdcosz_emshowerdc[1];   //[nshowers_emshowerdc]
   Float_t         shwr_startx_emshowerdc[1];   //[nshowers_emshowerdc]
   Float_t         shwr_starty_emshowerdc[1];   //[nshowers_emshowerdc]
   Float_t         shwr_startz_emshowerdc[1];   //[nshowers_emshowerdc]
   Float_t         shwr_totEng_emshowerdc[1][3];   //[nshowers_emshowerdc]
   Float_t         shwr_dedx_emshowerdc[1][3];   //[nshowers_emshowerdc]
   Float_t         shwr_mipEng_emshowerdc[1][3];   //[nshowers_emshowerdc]
   Short_t         shwr_hasPFParticle_emshowerdc[1];   //[nshowers_emshowerdc]
   Short_t         shwr_PFParticleID_emshowerdc[1];   //[nshowers_emshowerdc]
   Float_t         shwr_pidmvamu_emshowerdc[1];   //[nshowers_emshowerdc]
   Float_t         shwr_pidmvae_emshowerdc[1];   //[nshowers_emshowerdc]
   Float_t         shwr_pidmvapich_emshowerdc[1];   //[nshowers_emshowerdc]
   Float_t         shwr_pidmvapi0_emshowerdc[1];   //[nshowers_emshowerdc]
   Float_t         shwr_pidmvapr_emshowerdc[1];   //[nshowers_emshowerdc]
   Short_t         nvtx_linecluster;
   Short_t         vtxId_linecluster[2];   //[nvtx_linecluster]
   Float_t         vtxx_linecluster[2];   //[nvtx_linecluster]
   Float_t         vtxy_linecluster[2];   //[nvtx_linecluster]
   Float_t         vtxz_linecluster[2];   //[nvtx_linecluster]
   Short_t         vtxhasPFParticle_linecluster[2];   //[nvtx_linecluster]
   Short_t         vtxPFParticleID_linecluster[2];   //[nvtx_linecluster]
   Short_t         nvtx_lineclusterdc;
   Short_t         vtxId_lineclusterdc[2];   //[nvtx_lineclusterdc]
   Float_t         vtxx_lineclusterdc[2];   //[nvtx_lineclusterdc]
   Float_t         vtxy_lineclusterdc[2];   //[nvtx_lineclusterdc]
   Float_t         vtxz_lineclusterdc[2];   //[nvtx_lineclusterdc]
   Short_t         vtxhasPFParticle_lineclusterdc[2];   //[nvtx_lineclusterdc]
   Short_t         vtxPFParticleID_lineclusterdc[2];   //[nvtx_lineclusterdc]
   Short_t         nvtx_pmtrack;
   Short_t         vtxId_pmtrack[7];   //[nvtx_pmtrack]
   Float_t         vtxx_pmtrack[7];   //[nvtx_pmtrack]
   Float_t         vtxy_pmtrack[7];   //[nvtx_pmtrack]
   Float_t         vtxz_pmtrack[7];   //[nvtx_pmtrack]
   Short_t         vtxhasPFParticle_pmtrack[7];   //[nvtx_pmtrack]
   Short_t         vtxPFParticleID_pmtrack[7];   //[nvtx_pmtrack]
   Short_t         nvtx_pmtrackdc;
   Short_t         vtxId_pmtrackdc[7];   //[nvtx_pmtrackdc]
   Float_t         vtxx_pmtrackdc[7];   //[nvtx_pmtrackdc]
   Float_t         vtxy_pmtrackdc[7];   //[nvtx_pmtrackdc]
   Float_t         vtxz_pmtrackdc[7];   //[nvtx_pmtrackdc]
   Short_t         vtxhasPFParticle_pmtrackdc[7];   //[nvtx_pmtrackdc]
   Short_t         vtxPFParticleID_pmtrackdc[7];   //[nvtx_pmtrackdc]
   Short_t         nvtx_pandora;
   Short_t         vtxId_pandora[6];   //[nvtx_pandora]
   Float_t         vtxx_pandora[6];   //[nvtx_pandora]
   Float_t         vtxy_pandora[6];   //[nvtx_pandora]
   Float_t         vtxz_pandora[6];   //[nvtx_pandora]
   Short_t         vtxhasPFParticle_pandora[6];   //[nvtx_pandora]
   Short_t         vtxPFParticleID_pandora[6];   //[nvtx_pandora]
   Short_t         nvtx_pandoradc;
   Short_t         vtxId_pandoradc[6];   //[nvtx_pandoradc]
   Float_t         vtxx_pandoradc[6];   //[nvtx_pandoradc]
   Float_t         vtxy_pandoradc[6];   //[nvtx_pandoradc]
   Float_t         vtxz_pandoradc[6];   //[nvtx_pandoradc]
   Short_t         vtxhasPFParticle_pandoradc[6];   //[nvtx_pandoradc]
   Short_t         vtxPFParticleID_pandoradc[6];   //[nvtx_pandoradc]

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_subrun;   //!
   TBranch        *b_event;   //!
   TBranch        *b_evttime;   //!
   TBranch        *b_beamtime;   //!
   TBranch        *b_pot;   //!
   TBranch        *b_isdata;   //!
   TBranch        *b_taulife;   //!
   TBranch        *b_triggernumber;   //!
   TBranch        *b_triggertime;   //!
   TBranch        *b_beamgatetime;   //!
   TBranch        *b_triggerbits;   //!
   TBranch        *b_potbnb;   //!
   TBranch        *b_potnumitgt;   //!
   TBranch        *b_potnumi101;   //!
   TBranch        *b_no_hits;   //!
   TBranch        *b_no_hits_stored;   //!
   TBranch        *b_hit_tpc;   //!
   TBranch        *b_hit_plane;   //!
   TBranch        *b_hit_wire;   //!
   TBranch        *b_hit_channel;   //!
   TBranch        *b_hit_peakT;   //!
   TBranch        *b_hit_charge;   //!
   TBranch        *b_hit_ph;   //!
   TBranch        *b_hit_startT;   //!
   TBranch        *b_hit_endT;   //!
   TBranch        *b_hit_rms;   //!
   TBranch        *b_hit_trueX;   //!
   TBranch        *b_hit_goodnessOfFit;   //!
   TBranch        *b_hit_multiplicity;   //!
   TBranch        *b_hit_trkid;   //!
   TBranch        *b_hit_trkKey;   //!
   TBranch        *b_hit_clusterid;   //!
   TBranch        *b_hit_clusterKey;   //!
   TBranch        *b_hit_nelec;   //!
   TBranch        *b_hit_energy;   //!
   TBranch        *b_nclusters;   //!
   TBranch        *b_clusterId;   //!
   TBranch        *b_clusterView;   //!
   TBranch        *b_cluster_StartCharge;   //!
   TBranch        *b_cluster_StartAngle;   //!
   TBranch        *b_cluster_EndCharge;   //!
   TBranch        *b_cluster_EndAngle;   //!
   TBranch        *b_cluster_Integral;   //!
   TBranch        *b_cluster_IntegralAverage;   //!
   TBranch        *b_cluster_SummedADC;   //!
   TBranch        *b_cluster_SummedADCaverage;   //!
   TBranch        *b_cluster_MultipleHitDensity;   //!
   TBranch        *b_cluster_Width;   //!
   TBranch        *b_cluster_NHits;   //!
   TBranch        *b_cluster_StartWire;   //!
   TBranch        *b_cluster_StartTick;   //!
   TBranch        *b_cluster_EndWire;   //!
   TBranch        *b_cluster_EndTick;   //!
   TBranch        *b_cluncosmictags_tagger;   //!
   TBranch        *b_clucosmicscore_tagger;   //!
   TBranch        *b_clucosmictype_tagger;   //!
   TBranch        *b_no_flashes;   //!
   TBranch        *b_flash_time;   //!
   TBranch        *b_flash_pe;   //!
   TBranch        *b_flash_ycenter;   //!
   TBranch        *b_flash_zcenter;   //!
   TBranch        *b_flash_ywidth;   //!
   TBranch        *b_flash_zwidth;   //!
   TBranch        *b_flash_timewidth;   //!
   TBranch        *b_no_ExternCounts;   //!
   TBranch        *b_externcounts_time;   //!
   TBranch        *b_externcounts_id;   //!
   TBranch        *b_kNVertexAlgos;   //!
   TBranch        *b_kNShowerAlgos;   //!
   TBranch        *b_mcevts_truthcry;   //!
   TBranch        *b_cry_no_primaries;   //!
   TBranch        *b_cry_primaries_pdg;   //!
   TBranch        *b_cry_Eng;   //!
   TBranch        *b_cry_Px;   //!
   TBranch        *b_cry_Py;   //!
   TBranch        *b_cry_Pz;   //!
   TBranch        *b_cry_P;   //!
   TBranch        *b_cry_StartPointx;   //!
   TBranch        *b_cry_StartPointy;   //!
   TBranch        *b_cry_StartPointz;   //!
   TBranch        *b_cry_StartPointt;   //!
   TBranch        *b_cry_status_code;   //!
   TBranch        *b_cry_mass;   //!
   TBranch        *b_cry_trackID;   //!
   TBranch        *b_cry_ND;   //!
   TBranch        *b_cry_mother;   //!
   TBranch        *b_no_primaries;   //!
   TBranch        *b_geant_list_size;   //!
   TBranch        *b_geant_list_size_in_tpcAV;   //!
   TBranch        *b_pdg;   //!
   TBranch        *b_status;   //!
   TBranch        *b_Mass;   //!
   TBranch        *b_Eng;   //!
   TBranch        *b_EndE;   //!
   TBranch        *b_Px;   //!
   TBranch        *b_Py;   //!
   TBranch        *b_Pz;   //!
   TBranch        *b_P;   //!
   TBranch        *b_StartPointx;   //!
   TBranch        *b_StartPointy;   //!
   TBranch        *b_StartPointz;   //!
   TBranch        *b_StartT;   //!
   TBranch        *b_EndPointx;   //!
   TBranch        *b_EndPointy;   //!
   TBranch        *b_EndPointz;   //!
   TBranch        *b_EndT;   //!
   TBranch        *b_theta;   //!
   TBranch        *b_phi;   //!
   TBranch        *b_theta_xz;   //!
   TBranch        *b_theta_yz;   //!
   TBranch        *b_pathlen;   //!
   TBranch        *b_inTPCActive;   //!
   TBranch        *b_StartPointx_tpcAV;   //!
   TBranch        *b_StartPointy_tpcAV;   //!
   TBranch        *b_StartPointz_tpcAV;   //!
   TBranch        *b_StartT_tpcAV;   //!
   TBranch        *b_StartE_tpcAV;   //!
   TBranch        *b_StartP_tpcAV;   //!
   TBranch        *b_StartPx_tpcAV;   //!
   TBranch        *b_StartPy_tpcAV;   //!
   TBranch        *b_StartPz_tpcAV;   //!
   TBranch        *b_EndPointx_tpcAV;   //!
   TBranch        *b_EndPointy_tpcAV;   //!
   TBranch        *b_EndPointz_tpcAV;   //!
   TBranch        *b_EndT_tpcAV;   //!
   TBranch        *b_EndE_tpcAV;   //!
   TBranch        *b_EndP_tpcAV;   //!
   TBranch        *b_EndPx_tpcAV;   //!
   TBranch        *b_EndPy_tpcAV;   //!
   TBranch        *b_EndPz_tpcAV;   //!
   TBranch        *b_pathlen_drifted;   //!
   TBranch        *b_inTPCDrifted;   //!
   TBranch        *b_StartPointx_drifted;   //!
   TBranch        *b_StartPointy_drifted;   //!
   TBranch        *b_StartPointz_drifted;   //!
   TBranch        *b_StartT_drifted;   //!
   TBranch        *b_StartE_drifted;   //!
   TBranch        *b_StartP_drifted;   //!
   TBranch        *b_StartPx_drifted;   //!
   TBranch        *b_StartPy_drifted;   //!
   TBranch        *b_StartPz_drifted;   //!
   TBranch        *b_EndPointx_drifted;   //!
   TBranch        *b_EndPointy_drifted;   //!
   TBranch        *b_EndPointz_drifted;   //!
   TBranch        *b_EndT_drifted;   //!
   TBranch        *b_EndE_drifted;   //!
   TBranch        *b_EndP_drifted;   //!
   TBranch        *b_EndPx_drifted;   //!
   TBranch        *b_EndPy_drifted;   //!
   TBranch        *b_EndPz_drifted;   //!
   TBranch        *b_NumberDaughters;   //!
   TBranch        *b_Mother;   //!
   TBranch        *b_TrackId;   //!
   TBranch        *b_MergedId;   //!
   TBranch        *b_origin;   //!
   TBranch        *b_MCTruthIndex;   //!
   TBranch        *b_process_primary;   //!
   TBranch        *b_processname;   //!
   TBranch        *b_nshowers_emshower;   //!
   TBranch        *b_showerID_emshower;   //!
   TBranch        *b_shwr_bestplane_emshower;   //!
   TBranch        *b_shwr_length_emshower;   //!
   TBranch        *b_shwr_startdcosx_emshower;   //!
   TBranch        *b_shwr_startdcosy_emshower;   //!
   TBranch        *b_shwr_startdcosz_emshower;   //!
   TBranch        *b_shwr_startx_emshower;   //!
   TBranch        *b_shwr_starty_emshower;   //!
   TBranch        *b_shwr_startz_emshower;   //!
   TBranch        *b_shwr_totEng_emshower;   //!
   TBranch        *b_shwr_dedx_emshower;   //!
   TBranch        *b_shwr_mipEng_emshower;   //!
   TBranch        *b_shwr_hasPFParticle_emshower;   //!
   TBranch        *b_shwr_PFParticleID_emshower;   //!
   TBranch        *b_shwr_pidmvamu_emshower;   //!
   TBranch        *b_shwr_pidmvae_emshower;   //!
   TBranch        *b_shwr_pidmvapich_emshower;   //!
   TBranch        *b_shwr_pidmvapi0_emshower;   //!
   TBranch        *b_shwr_pidmvapr_emshower;   //!
   TBranch        *b_nshowers_emshowerdc;   //!
   TBranch        *b_showerID_emshowerdc;   //!
   TBranch        *b_shwr_bestplane_emshowerdc;   //!
   TBranch        *b_shwr_length_emshowerdc;   //!
   TBranch        *b_shwr_startdcosx_emshowerdc;   //!
   TBranch        *b_shwr_startdcosy_emshowerdc;   //!
   TBranch        *b_shwr_startdcosz_emshowerdc;   //!
   TBranch        *b_shwr_startx_emshowerdc;   //!
   TBranch        *b_shwr_starty_emshowerdc;   //!
   TBranch        *b_shwr_startz_emshowerdc;   //!
   TBranch        *b_shwr_totEng_emshowerdc;   //!
   TBranch        *b_shwr_dedx_emshowerdc;   //!
   TBranch        *b_shwr_mipEng_emshowerdc;   //!
   TBranch        *b_shwr_hasPFParticle_emshowerdc;   //!
   TBranch        *b_shwr_PFParticleID_emshowerdc;   //!
   TBranch        *b_shwr_pidmvamu_emshowerdc;   //!
   TBranch        *b_shwr_pidmvae_emshowerdc;   //!
   TBranch        *b_shwr_pidmvapich_emshowerdc;   //!
   TBranch        *b_shwr_pidmvapi0_emshowerdc;   //!
   TBranch        *b_shwr_pidmvapr_emshowerdc;   //!
   TBranch        *b_nvtx_linecluster;   //!
   TBranch        *b_vtxId_linecluster;   //!
   TBranch        *b_vtxx_linecluster;   //!
   TBranch        *b_vtxy_linecluster;   //!
   TBranch        *b_vtxz_linecluster;   //!
   TBranch        *b_vtxhasPFParticle_linecluster;   //!
   TBranch        *b_vtxPFParticleID_linecluster;   //!
   TBranch        *b_nvtx_lineclusterdc;   //!
   TBranch        *b_vtxId_lineclusterdc;   //!
   TBranch        *b_vtxx_lineclusterdc;   //!
   TBranch        *b_vtxy_lineclusterdc;   //!
   TBranch        *b_vtxz_lineclusterdc;   //!
   TBranch        *b_vtxhasPFParticle_lineclusterdc;   //!
   TBranch        *b_vtxPFParticleID_lineclusterdc;   //!
   TBranch        *b_nvtx_pmtrack;   //!
   TBranch        *b_vtxId_pmtrack;   //!
   TBranch        *b_vtxx_pmtrack;   //!
   TBranch        *b_vtxy_pmtrack;   //!
   TBranch        *b_vtxz_pmtrack;   //!
   TBranch        *b_vtxhasPFParticle_pmtrack;   //!
   TBranch        *b_vtxPFParticleID_pmtrack;   //!
   TBranch        *b_nvtx_pmtrackdc;   //!
   TBranch        *b_vtxId_pmtrackdc;   //!
   TBranch        *b_vtxx_pmtrackdc;   //!
   TBranch        *b_vtxy_pmtrackdc;   //!
   TBranch        *b_vtxz_pmtrackdc;   //!
   TBranch        *b_vtxhasPFParticle_pmtrackdc;   //!
  TBranch        *b_vtxPFParticleID_pmtrackdc;   //!
   TBranch        *b_nvtx_pandora;   //!
   TBranch        *b_vtxId_pandora;   //!
   TBranch        *b_vtxx_pandora;   //!
   TBranch        *b_vtxy_pandora;   //!
   TBranch        *b_vtxz_pandora;   //!
   TBranch        *b_vtxhasPFParticle_pandora;   //!
   TBranch        *b_vtxPFParticleID_pandora;   //!
   TBranch        *b_nvtx_pandoradc;   //!
   TBranch        *b_vtxId_pandoradc;   //!
   TBranch        *b_vtxx_pandoradc;   //!
   TBranch        *b_vtxy_pandoradc;   //!
   TBranch        *b_vtxz_pandoradc;   //!
   TBranch        *b_vtxhasPFParticle_pandoradc;   //!
   TBranch        *b_vtxPFParticleID_pandoradc;   //!

   PionAna(TTree *tree=0);
   virtual ~PionAna();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);

   //int Test(); Test of declaring method in header file
   
   enum pionCat{cross=0, elast, inelast, absorp, exchange, product, rest_decay, rest_capt,undefined=-1};//Declaring types of pion processes
   pionCat pionProcess(/*int pionID,*/ std::vector<int> daughterIden);//declaring function header that will return type of pion process
    
   std::vector<int> daughterID(int trackID);//Declare function that returns daughter IDs

  /* std::vector<int> daughterPDG(int trackID);//Declare function that returns daughter PDGs*/
   
   int atomNumber(int pdg);

   int indexMin(double array[], int size);


};
#endif

#ifdef PionAna_cxx
PionAna::PionAna(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("../anatree/protoDune_pion_200MeV_mono_JMorris_All_anatree.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("../anatree/protoDune_pion_200MeV_mono_JMorris_All_anatree.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("../anatree/protoDune_pion_200MeV_mono_JMorris_All_anatree.root:/analysistree");
      dir->GetObject("anatree",tree);

   }
   Init(tree);
}

PionAna::~PionAna()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t PionAna::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t PionAna::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void PionAna::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   processname = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("subrun", &subrun, &b_subrun);
   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("evttime", &evttime, &b_evttime);
   fChain->SetBranchAddress("beamtime", &beamtime, &b_beamtime);
   fChain->SetBranchAddress("pot", &pot, &b_pot);
   fChain->SetBranchAddress("isdata", &isdata, &b_isdata);
   fChain->SetBranchAddress("taulife", &taulife, &b_taulife);
   fChain->SetBranchAddress("triggernumber", &triggernumber, &b_triggernumber);
   fChain->SetBranchAddress("triggertime", &triggertime, &b_triggertime);
   fChain->SetBranchAddress("beamgatetime", &beamgatetime, &b_beamgatetime);
   fChain->SetBranchAddress("triggerbits", &triggerbits, &b_triggerbits);
   fChain->SetBranchAddress("potbnb", &potbnb, &b_potbnb);
   fChain->SetBranchAddress("potnumitgt", &potnumitgt, &b_potnumitgt);
   fChain->SetBranchAddress("potnumi101", &potnumi101, &b_potnumi101);
   fChain->SetBranchAddress("no_hits", &no_hits, &b_no_hits);
   fChain->SetBranchAddress("no_hits_stored", &no_hits_stored, &b_no_hits_stored);
   fChain->SetBranchAddress("hit_tpc", hit_tpc, &b_hit_tpc);
   fChain->SetBranchAddress("hit_plane", hit_plane, &b_hit_plane);
   fChain->SetBranchAddress("hit_wire", hit_wire, &b_hit_wire);
   fChain->SetBranchAddress("hit_channel", hit_channel, &b_hit_channel);
   fChain->SetBranchAddress("hit_peakT", hit_peakT, &b_hit_peakT);
   fChain->SetBranchAddress("hit_charge", hit_charge, &b_hit_charge);
   fChain->SetBranchAddress("hit_ph", hit_ph, &b_hit_ph);
   fChain->SetBranchAddress("hit_startT", hit_startT, &b_hit_startT);
   fChain->SetBranchAddress("hit_endT", hit_endT, &b_hit_endT);
   fChain->SetBranchAddress("hit_rms", hit_rms, &b_hit_rms);
   fChain->SetBranchAddress("hit_trueX", hit_trueX, &b_hit_trueX);
   fChain->SetBranchAddress("hit_goodnessOfFit", hit_goodnessOfFit, &b_hit_goodnessOfFit);
   fChain->SetBranchAddress("hit_multiplicity", hit_multiplicity, &b_hit_multiplicity);
   fChain->SetBranchAddress("hit_trkid", hit_trkid, &b_hit_trkid);
   fChain->SetBranchAddress("hit_trkKey", hit_trkKey, &b_hit_trkKey);
   fChain->SetBranchAddress("hit_clusterid", hit_clusterid, &b_hit_clusterid);
   fChain->SetBranchAddress("hit_clusterKey", hit_clusterKey, &b_hit_clusterKey);
   fChain->SetBranchAddress("hit_nelec", hit_nelec, &b_hit_nelec);
   fChain->SetBranchAddress("hit_energy", hit_energy, &b_hit_energy);
   fChain->SetBranchAddress("nclusters", &nclusters, &b_nclusters);
   fChain->SetBranchAddress("clusterId", clusterId, &b_clusterId);
   fChain->SetBranchAddress("clusterView", clusterView, &b_clusterView);
   fChain->SetBranchAddress("cluster_StartCharge", cluster_StartCharge, &b_cluster_StartCharge);
   fChain->SetBranchAddress("cluster_StartAngle", cluster_StartAngle, &b_cluster_StartAngle);
   fChain->SetBranchAddress("cluster_EndCharge", cluster_EndCharge, &b_cluster_EndCharge);
   fChain->SetBranchAddress("cluster_EndAngle", cluster_EndAngle, &b_cluster_EndAngle);
   fChain->SetBranchAddress("cluster_Integral", cluster_Integral, &b_cluster_Integral);
   fChain->SetBranchAddress("cluster_IntegralAverage", cluster_IntegralAverage, &b_cluster_IntegralAverage);
   fChain->SetBranchAddress("cluster_SummedADC", cluster_SummedADC, &b_cluster_SummedADC);
   fChain->SetBranchAddress("cluster_SummedADCaverage", cluster_SummedADCaverage, &b_cluster_SummedADCaverage);
   fChain->SetBranchAddress("cluster_MultipleHitDensity", cluster_MultipleHitDensity, &b_cluster_MultipleHitDensity);
   fChain->SetBranchAddress("cluster_Width", cluster_Width, &b_cluster_Width);
   fChain->SetBranchAddress("cluster_NHits", cluster_NHits, &b_cluster_NHits);
   fChain->SetBranchAddress("cluster_StartWire", cluster_StartWire, &b_cluster_StartWire);
   fChain->SetBranchAddress("cluster_StartTick", cluster_StartTick, &b_cluster_StartTick);
   fChain->SetBranchAddress("cluster_EndWire", cluster_EndWire, &b_cluster_EndWire);
   fChain->SetBranchAddress("cluster_EndTick", cluster_EndTick, &b_cluster_EndTick);
   fChain->SetBranchAddress("cluncosmictags_tagger", cluncosmictags_tagger, &b_cluncosmictags_tagger);
   fChain->SetBranchAddress("clucosmicscore_tagger", clucosmicscore_tagger, &b_clucosmicscore_tagger);
   fChain->SetBranchAddress("clucosmictype_tagger", clucosmictype_tagger, &b_clucosmictype_tagger);
   fChain->SetBranchAddress("no_flashes", &no_flashes, &b_no_flashes);
   fChain->SetBranchAddress("flash_time", flash_time, &b_flash_time);
   fChain->SetBranchAddress("flash_pe", flash_pe, &b_flash_pe);
   fChain->SetBranchAddress("flash_ycenter", flash_ycenter, &b_flash_ycenter);
   fChain->SetBranchAddress("flash_zcenter", flash_zcenter, &b_flash_zcenter);
   fChain->SetBranchAddress("flash_ywidth", flash_ywidth, &b_flash_ywidth);
   fChain->SetBranchAddress("flash_zwidth", flash_zwidth, &b_flash_zwidth);
   fChain->SetBranchAddress("flash_timewidth", flash_timewidth, &b_flash_timewidth);
   fChain->SetBranchAddress("no_ExternCounts", &no_ExternCounts, &b_no_ExternCounts);
   fChain->SetBranchAddress("externcounts_time", &externcounts_time, &b_externcounts_time);
   fChain->SetBranchAddress("externcounts_id", &externcounts_id, &b_externcounts_id);
   fChain->SetBranchAddress("kNVertexAlgos", &kNVertexAlgos, &b_kNVertexAlgos);
   fChain->SetBranchAddress("kNShowerAlgos", &kNShowerAlgos, &b_kNShowerAlgos);
   fChain->SetBranchAddress("mcevts_truthcry", &mcevts_truthcry, &b_mcevts_truthcry);
   fChain->SetBranchAddress("cry_no_primaries", &cry_no_primaries, &b_cry_no_primaries);
   fChain->SetBranchAddress("cry_primaries_pdg", cry_primaries_pdg, &b_cry_primaries_pdg);
   fChain->SetBranchAddress("cry_Eng", cry_Eng, &b_cry_Eng);
   fChain->SetBranchAddress("cry_Px", cry_Px, &b_cry_Px);
   fChain->SetBranchAddress("cry_Py", cry_Py, &b_cry_Py);
   fChain->SetBranchAddress("cry_Pz", cry_Pz, &b_cry_Pz);
   fChain->SetBranchAddress("cry_P", cry_P, &b_cry_P);
   fChain->SetBranchAddress("cry_StartPointx", cry_StartPointx, &b_cry_StartPointx);
   fChain->SetBranchAddress("cry_StartPointy", cry_StartPointy, &b_cry_StartPointy);
   fChain->SetBranchAddress("cry_StartPointz", cry_StartPointz, &b_cry_StartPointz);
   fChain->SetBranchAddress("cry_StartPointt", cry_StartPointt, &b_cry_StartPointt);
   fChain->SetBranchAddress("cry_status_code", cry_status_code, &b_cry_status_code);
   fChain->SetBranchAddress("cry_mass", cry_mass, &b_cry_mass);
   fChain->SetBranchAddress("cry_trackID", cry_trackID, &b_cry_trackID);
   fChain->SetBranchAddress("cry_ND", cry_ND, &b_cry_ND);
   fChain->SetBranchAddress("cry_mother", cry_mother, &b_cry_mother);
   fChain->SetBranchAddress("no_primaries", &no_primaries, &b_no_primaries);
   fChain->SetBranchAddress("geant_list_size", &geant_list_size, &b_geant_list_size);
   fChain->SetBranchAddress("geant_list_size_in_tpcAV", &geant_list_size_in_tpcAV, &b_geant_list_size_in_tpcAV);
   fChain->SetBranchAddress("pdg", pdg, &b_pdg);
   fChain->SetBranchAddress("status", status, &b_status);
   fChain->SetBranchAddress("Mass", Mass, &b_Mass);
   fChain->SetBranchAddress("Eng", Eng, &b_Eng);
   fChain->SetBranchAddress("EndE", EndE, &b_EndE);
   fChain->SetBranchAddress("Px", Px, &b_Px);
   fChain->SetBranchAddress("Py", Py, &b_Py);
   fChain->SetBranchAddress("Pz", Pz, &b_Pz);
   fChain->SetBranchAddress("P", P, &b_P);
   fChain->SetBranchAddress("StartPointx", StartPointx, &b_StartPointx);
   fChain->SetBranchAddress("StartPointy", StartPointy, &b_StartPointy);
   fChain->SetBranchAddress("StartPointz", StartPointz, &b_StartPointz);
   fChain->SetBranchAddress("StartT", StartT, &b_StartT);
   fChain->SetBranchAddress("EndPointx", EndPointx, &b_EndPointx);
   fChain->SetBranchAddress("EndPointy", EndPointy, &b_EndPointy);
   fChain->SetBranchAddress("EndPointz", EndPointz, &b_EndPointz);
   fChain->SetBranchAddress("EndT", EndT, &b_EndT);
   fChain->SetBranchAddress("theta", theta, &b_theta);
   fChain->SetBranchAddress("phi", phi, &b_phi);
   fChain->SetBranchAddress("theta_xz", theta_xz, &b_theta_xz);
   fChain->SetBranchAddress("theta_yz", theta_yz, &b_theta_yz);
   fChain->SetBranchAddress("pathlen", pathlen, &b_pathlen);
   fChain->SetBranchAddress("inTPCActive", inTPCActive, &b_inTPCActive);
   fChain->SetBranchAddress("StartPointx_tpcAV", StartPointx_tpcAV, &b_StartPointx_tpcAV);
   fChain->SetBranchAddress("StartPointy_tpcAV", StartPointy_tpcAV, &b_StartPointy_tpcAV);
   fChain->SetBranchAddress("StartPointz_tpcAV", StartPointz_tpcAV, &b_StartPointz_tpcAV);
   fChain->SetBranchAddress("StartT_tpcAV", StartT_tpcAV, &b_StartT_tpcAV);
   fChain->SetBranchAddress("StartE_tpcAV", StartE_tpcAV, &b_StartE_tpcAV);
   fChain->SetBranchAddress("StartP_tpcAV", StartP_tpcAV, &b_StartP_tpcAV);
   fChain->SetBranchAddress("StartPx_tpcAV", StartPx_tpcAV, &b_StartPx_tpcAV);
   fChain->SetBranchAddress("StartPy_tpcAV", StartPy_tpcAV, &b_StartPy_tpcAV);
   fChain->SetBranchAddress("StartPz_tpcAV", StartPz_tpcAV, &b_StartPz_tpcAV);
   fChain->SetBranchAddress("EndPointx_tpcAV", EndPointx_tpcAV, &b_EndPointx_tpcAV);
   fChain->SetBranchAddress("EndPointy_tpcAV", EndPointy_tpcAV, &b_EndPointy_tpcAV);
   fChain->SetBranchAddress("EndPointz_tpcAV", EndPointz_tpcAV, &b_EndPointz_tpcAV);
   fChain->SetBranchAddress("EndT_tpcAV", EndT_tpcAV, &b_EndT_tpcAV);
   fChain->SetBranchAddress("EndE_tpcAV", EndE_tpcAV, &b_EndE_tpcAV);
   fChain->SetBranchAddress("EndP_tpcAV", EndP_tpcAV, &b_EndP_tpcAV);
   fChain->SetBranchAddress("EndPx_tpcAV", EndPx_tpcAV, &b_EndPx_tpcAV);
   fChain->SetBranchAddress("EndPy_tpcAV", EndPy_tpcAV, &b_EndPy_tpcAV);
   fChain->SetBranchAddress("EndPz_tpcAV", EndPz_tpcAV, &b_EndPz_tpcAV);
   fChain->SetBranchAddress("pathlen_drifted", pathlen_drifted, &b_pathlen_drifted);
   fChain->SetBranchAddress("inTPCDrifted", inTPCDrifted, &b_inTPCDrifted);
   fChain->SetBranchAddress("StartPointx_drifted", StartPointx_drifted, &b_StartPointx_drifted);
   fChain->SetBranchAddress("StartPointy_drifted", StartPointy_drifted, &b_StartPointy_drifted);
   fChain->SetBranchAddress("StartPointz_drifted", StartPointz_drifted, &b_StartPointz_drifted);
   fChain->SetBranchAddress("StartT_drifted", StartT_drifted, &b_StartT_drifted);
   fChain->SetBranchAddress("StartE_drifted", StartE_drifted, &b_StartE_drifted);
   fChain->SetBranchAddress("StartP_drifted", StartP_drifted, &b_StartP_drifted);
   fChain->SetBranchAddress("StartPx_drifted", StartPx_drifted, &b_StartPx_drifted);
   fChain->SetBranchAddress("StartPy_drifted", StartPy_drifted, &b_StartPy_drifted);
   fChain->SetBranchAddress("StartPz_drifted", StartPz_drifted, &b_StartPz_drifted);
   fChain->SetBranchAddress("EndPointx_drifted", EndPointx_drifted, &b_EndPointx_drifted);
   fChain->SetBranchAddress("EndPointy_drifted", EndPointy_drifted, &b_EndPointy_drifted);
   fChain->SetBranchAddress("EndPointz_drifted", EndPointz_drifted, &b_EndPointz_drifted);
   fChain->SetBranchAddress("EndT_drifted", EndT_drifted, &b_EndT_drifted);
   fChain->SetBranchAddress("EndE_drifted", EndE_drifted, &b_EndE_drifted);
   fChain->SetBranchAddress("EndP_drifted", EndP_drifted, &b_EndP_drifted);
   fChain->SetBranchAddress("EndPx_drifted", EndPx_drifted, &b_EndPx_drifted);
   fChain->SetBranchAddress("EndPy_drifted", EndPy_drifted, &b_EndPy_drifted);
   fChain->SetBranchAddress("EndPz_drifted", EndPz_drifted, &b_EndPz_drifted);
   fChain->SetBranchAddress("NumberDaughters", NumberDaughters, &b_NumberDaughters);
   fChain->SetBranchAddress("Mother", Mother, &b_Mother);
   fChain->SetBranchAddress("TrackId", TrackId, &b_TrackId);
   fChain->SetBranchAddress("MergedId", MergedId, &b_MergedId);
   fChain->SetBranchAddress("origin", origin, &b_origin);
   fChain->SetBranchAddress("MCTruthIndex", MCTruthIndex, &b_MCTruthIndex);
   fChain->SetBranchAddress("process_primary", process_primary, &b_process_primary);
   fChain->SetBranchAddress("processname", &processname, &b_processname);
   fChain->SetBranchAddress("nshowers_emshower", &nshowers_emshower, &b_nshowers_emshower);
   fChain->SetBranchAddress("showerID_emshower", showerID_emshower, &b_showerID_emshower);
   fChain->SetBranchAddress("shwr_bestplane_emshower", shwr_bestplane_emshower, &b_shwr_bestplane_emshower);
   fChain->SetBranchAddress("shwr_length_emshower", shwr_length_emshower, &b_shwr_length_emshower);
   fChain->SetBranchAddress("shwr_startdcosx_emshower", shwr_startdcosx_emshower, &b_shwr_startdcosx_emshower);
   fChain->SetBranchAddress("shwr_startdcosy_emshower", shwr_startdcosy_emshower, &b_shwr_startdcosy_emshower);
   fChain->SetBranchAddress("shwr_startdcosz_emshower", shwr_startdcosz_emshower, &b_shwr_startdcosz_emshower);
   fChain->SetBranchAddress("shwr_startx_emshower", shwr_startx_emshower, &b_shwr_startx_emshower);
   fChain->SetBranchAddress("shwr_starty_emshower", shwr_starty_emshower, &b_shwr_starty_emshower);
   fChain->SetBranchAddress("shwr_startz_emshower", shwr_startz_emshower, &b_shwr_startz_emshower);
   fChain->SetBranchAddress("shwr_totEng_emshower", shwr_totEng_emshower, &b_shwr_totEng_emshower);
   fChain->SetBranchAddress("shwr_dedx_emshower", shwr_dedx_emshower, &b_shwr_dedx_emshower);
   fChain->SetBranchAddress("shwr_mipEng_emshower", shwr_mipEng_emshower, &b_shwr_mipEng_emshower);
   fChain->SetBranchAddress("shwr_hasPFParticle_emshower", shwr_hasPFParticle_emshower, &b_shwr_hasPFParticle_emshower);
   fChain->SetBranchAddress("shwr_PFParticleID_emshower", shwr_PFParticleID_emshower, &b_shwr_PFParticleID_emshower);
   fChain->SetBranchAddress("shwr_pidmvamu_emshower", shwr_pidmvamu_emshower, &b_shwr_pidmvamu_emshower);
   fChain->SetBranchAddress("shwr_pidmvae_emshower", shwr_pidmvae_emshower, &b_shwr_pidmvae_emshower);
   fChain->SetBranchAddress("shwr_pidmvapich_emshower", shwr_pidmvapich_emshower, &b_shwr_pidmvapich_emshower);
   fChain->SetBranchAddress("shwr_pidmvapi0_emshower", shwr_pidmvapi0_emshower, &b_shwr_pidmvapi0_emshower);
   fChain->SetBranchAddress("shwr_pidmvapr_emshower", shwr_pidmvapr_emshower, &b_shwr_pidmvapr_emshower);
   fChain->SetBranchAddress("nshowers_emshowerdc", &nshowers_emshowerdc, &b_nshowers_emshowerdc);
   fChain->SetBranchAddress("showerID_emshowerdc", showerID_emshowerdc, &b_showerID_emshowerdc);
   fChain->SetBranchAddress("shwr_bestplane_emshowerdc", shwr_bestplane_emshowerdc, &b_shwr_bestplane_emshowerdc);
   fChain->SetBranchAddress("shwr_length_emshowerdc", shwr_length_emshowerdc, &b_shwr_length_emshowerdc);
   fChain->SetBranchAddress("shwr_startdcosx_emshowerdc", shwr_startdcosx_emshowerdc, &b_shwr_startdcosx_emshowerdc);
   fChain->SetBranchAddress("shwr_startdcosy_emshowerdc", shwr_startdcosy_emshowerdc, &b_shwr_startdcosy_emshowerdc);
   fChain->SetBranchAddress("shwr_startdcosz_emshowerdc", shwr_startdcosz_emshowerdc, &b_shwr_startdcosz_emshowerdc);
   fChain->SetBranchAddress("shwr_startx_emshowerdc", shwr_startx_emshowerdc, &b_shwr_startx_emshowerdc);
   fChain->SetBranchAddress("shwr_starty_emshowerdc", shwr_starty_emshowerdc, &b_shwr_starty_emshowerdc);
   fChain->SetBranchAddress("shwr_startz_emshowerdc", shwr_startz_emshowerdc, &b_shwr_startz_emshowerdc);
   fChain->SetBranchAddress("shwr_totEng_emshowerdc", shwr_totEng_emshowerdc, &b_shwr_totEng_emshowerdc);
   fChain->SetBranchAddress("shwr_dedx_emshowerdc", shwr_dedx_emshowerdc, &b_shwr_dedx_emshowerdc);
   fChain->SetBranchAddress("shwr_mipEng_emshowerdc", shwr_mipEng_emshowerdc, &b_shwr_mipEng_emshowerdc);
   fChain->SetBranchAddress("shwr_hasPFParticle_emshowerdc", shwr_hasPFParticle_emshowerdc, &b_shwr_hasPFParticle_emshowerdc);
   fChain->SetBranchAddress("shwr_PFParticleID_emshowerdc", shwr_PFParticleID_emshowerdc, &b_shwr_PFParticleID_emshowerdc);
   fChain->SetBranchAddress("shwr_pidmvamu_emshowerdc", shwr_pidmvamu_emshowerdc, &b_shwr_pidmvamu_emshowerdc);
   fChain->SetBranchAddress("shwr_pidmvae_emshowerdc", shwr_pidmvae_emshowerdc, &b_shwr_pidmvae_emshowerdc);
   fChain->SetBranchAddress("shwr_pidmvapich_emshowerdc", shwr_pidmvapich_emshowerdc, &b_shwr_pidmvapich_emshowerdc);
   fChain->SetBranchAddress("shwr_pidmvapi0_emshowerdc", shwr_pidmvapi0_emshowerdc, &b_shwr_pidmvapi0_emshowerdc);
   fChain->SetBranchAddress("shwr_pidmvapr_emshowerdc", shwr_pidmvapr_emshowerdc, &b_shwr_pidmvapr_emshowerdc);
   fChain->SetBranchAddress("nvtx_linecluster", &nvtx_linecluster, &b_nvtx_linecluster);
   fChain->SetBranchAddress("vtxId_linecluster", vtxId_linecluster, &b_vtxId_linecluster);
   fChain->SetBranchAddress("vtxx_linecluster", vtxx_linecluster, &b_vtxx_linecluster);
   fChain->SetBranchAddress("vtxy_linecluster", vtxy_linecluster, &b_vtxy_linecluster);
   fChain->SetBranchAddress("vtxz_linecluster", vtxz_linecluster, &b_vtxz_linecluster);
   fChain->SetBranchAddress("vtxhasPFParticle_linecluster", vtxhasPFParticle_linecluster, &b_vtxhasPFParticle_linecluster);
   fChain->SetBranchAddress("vtxPFParticleID_linecluster", vtxPFParticleID_linecluster, &b_vtxPFParticleID_linecluster);
   fChain->SetBranchAddress("nvtx_lineclusterdc", &nvtx_lineclusterdc, &b_nvtx_lineclusterdc);
   fChain->SetBranchAddress("vtxId_lineclusterdc", vtxId_lineclusterdc, &b_vtxId_lineclusterdc);
   fChain->SetBranchAddress("vtxx_lineclusterdc", vtxx_lineclusterdc, &b_vtxx_lineclusterdc);
   fChain->SetBranchAddress("vtxy_lineclusterdc", vtxy_lineclusterdc, &b_vtxy_lineclusterdc);
   fChain->SetBranchAddress("vtxz_lineclusterdc", vtxz_lineclusterdc, &b_vtxz_lineclusterdc);
   fChain->SetBranchAddress("vtxhasPFParticle_lineclusterdc", vtxhasPFParticle_lineclusterdc, &b_vtxhasPFParticle_lineclusterdc);
   fChain->SetBranchAddress("vtxPFParticleID_lineclusterdc", vtxPFParticleID_lineclusterdc, &b_vtxPFParticleID_lineclusterdc);
   fChain->SetBranchAddress("nvtx_pmtrack", &nvtx_pmtrack, &b_nvtx_pmtrack);
   fChain->SetBranchAddress("vtxId_pmtrack", vtxId_pmtrack, &b_vtxId_pmtrack);
   fChain->SetBranchAddress("vtxx_pmtrack", vtxx_pmtrack, &b_vtxx_pmtrack);
   fChain->SetBranchAddress("vtxy_pmtrack", vtxy_pmtrack, &b_vtxy_pmtrack);
   fChain->SetBranchAddress("vtxz_pmtrack", vtxz_pmtrack, &b_vtxz_pmtrack);
   fChain->SetBranchAddress("vtxhasPFParticle_pmtrack", vtxhasPFParticle_pmtrack, &b_vtxhasPFParticle_pmtrack);
   fChain->SetBranchAddress("vtxPFParticleID_pmtrack", vtxPFParticleID_pmtrack, &b_vtxPFParticleID_pmtrack);
   fChain->SetBranchAddress("nvtx_pmtrackdc", &nvtx_pmtrackdc, &b_nvtx_pmtrackdc);
   fChain->SetBranchAddress("vtxId_pmtrackdc", vtxId_pmtrackdc, &b_vtxId_pmtrackdc);
   fChain->SetBranchAddress("vtxx_pmtrackdc", vtxx_pmtrackdc, &b_vtxx_pmtrackdc);
   fChain->SetBranchAddress("vtxy_pmtrackdc", vtxy_pmtrackdc, &b_vtxy_pmtrackdc);
   fChain->SetBranchAddress("vtxz_pmtrackdc", vtxz_pmtrackdc, &b_vtxz_pmtrackdc);
   fChain->SetBranchAddress("vtxhasPFParticle_pmtrackdc", vtxhasPFParticle_pmtrackdc, &b_vtxhasPFParticle_pmtrackdc);
   fChain->SetBranchAddress("vtxPFParticleID_pmtrackdc", vtxPFParticleID_pmtrackdc, &b_vtxPFParticleID_pmtrackdc);
   fChain->SetBranchAddress("nvtx_pandora", &nvtx_pandora, &b_nvtx_pandora);
   fChain->SetBranchAddress("vtxId_pandora", vtxId_pandora, &b_vtxId_pandora);
   fChain->SetBranchAddress("vtxx_pandora", vtxx_pandora, &b_vtxx_pandora);
   fChain->SetBranchAddress("vtxy_pandora", vtxy_pandora, &b_vtxy_pandora);
   fChain->SetBranchAddress("vtxz_pandora", vtxz_pandora, &b_vtxz_pandora);
   fChain->SetBranchAddress("vtxhasPFParticle_pandora", vtxhasPFParticle_pandora, &b_vtxhasPFParticle_pandora);
   fChain->SetBranchAddress("vtxPFParticleID_pandora", vtxPFParticleID_pandora, &b_vtxPFParticleID_pandora);
   fChain->SetBranchAddress("nvtx_pandoradc", &nvtx_pandoradc, &b_nvtx_pandoradc);
   fChain->SetBranchAddress("vtxId_pandoradc", vtxId_pandoradc, &b_vtxId_pandoradc);
   fChain->SetBranchAddress("vtxx_pandoradc", vtxx_pandoradc, &b_vtxx_pandoradc);
   fChain->SetBranchAddress("vtxy_pandoradc", vtxy_pandoradc, &b_vtxy_pandoradc);
   fChain->SetBranchAddress("vtxz_pandoradc", vtxz_pandoradc, &b_vtxz_pandoradc);
   fChain->SetBranchAddress("vtxhasPFParticle_pandoradc", vtxhasPFParticle_pandoradc, &b_vtxhasPFParticle_pandoradc);
   fChain->SetBranchAddress("vtxPFParticleID_pandoradc", vtxPFParticleID_pandoradc, &b_vtxPFParticleID_pandoradc);
   Notify();
}

Bool_t PionAna::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void PionAna::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t PionAna::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef PionAna_cxx

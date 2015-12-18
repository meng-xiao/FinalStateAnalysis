/*
 * Implementation of the various Jet selections used in the H2Tau analysis
 *
 * Authors: truggles 
 *
 */

#ifndef JETSELECTIONS_9N7EKFZ2
#define JETSELECTIONS_9N7EKFZ2

#include <vector>
#include "DataFormats/Candidate/interface/Candidate.h"
#include "FinalStateAnalysis/DataAlgos/interface/JetVariables.h"

std::vector<double> computeJetInfo(
    const std::vector<const reco::Candidate*>& hardScatter,
    const reco::Candidate::LorentzVector& metp4,
    const std::vector<const reco::Candidate*>& jets);

#endif /* end of include guard: JETSELECTIONS_9N7EKFZ2 */

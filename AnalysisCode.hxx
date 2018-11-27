#include "TLorentzVector.h"
#include "ROOT/RVec.hxx"

using RVec = const ROOT::VecOps::RVec<float>&;
float compute_mass(RVec pt, RVec eta, RVec phi, RVec mass);

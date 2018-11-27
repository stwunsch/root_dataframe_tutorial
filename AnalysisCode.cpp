#include "AnalysisCode.hxx"

float compute_mass(RVec pt, RVec eta, RVec phi, RVec mass) {
    TLorentzVector p1, p2;
    p1.SetPtEtaPhiM(pt[0], eta[0], phi[0], mass[0]);
    p2.SetPtEtaPhiM(pt[1], eta[1], phi[1], mass[1]);
    return (p1 + p2).M();
}

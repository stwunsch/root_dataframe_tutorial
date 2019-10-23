#include "Math/Vector4Dfwd.h"
#include "ROOT/RVec.hxx"

// Use O3 optimization level for just-in-time compilation
#pragma cling optimize(3)

using Vec_t = const ROOT::VecOps::RVec<float>&;
float compute_mass(Vec_t pt, Vec_t eta, Vec_t phi, Vec_t mass) {
    ROOT::Math::PtEtaPhiMVector p1(pt[0], eta[0], phi[0], mass[0]);
    ROOT::Math::PtEtaPhiMVector p2(pt[1], eta[1], phi[1], mass[1]);
    return (p1 + p2).mass();
}

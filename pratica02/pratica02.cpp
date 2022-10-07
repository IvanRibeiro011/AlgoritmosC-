#include <iostream>
#include "veiculo.cpp"

using namespace std;

int main() {

    Veiculo * terr = new Terrestre("VT1");
    dynamic_cast<Terrestre*>(terr)->setCap_Pass(45);
    terr->mover();

    Veiculo * aqua = new Aquatico("VQ1");
    dynamic_cast<Aquatico*>(aqua)->setCarga_Max(12.5);
    aqua->mover();

    Veiculo * aereo = new Aereo("VA1");
    ((Aereo *) aereo)->setVel_max(1040);
    aereo->mover();

    Anfibio * anfi = new Anfibio("Anfibio");
    anfi->mover();
    
    delete terr;
    delete aqua;
    delete aereo;
    delete anfi;

    return 0;
}
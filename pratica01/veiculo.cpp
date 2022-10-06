#include <iostream>
#include "veiculo.h"

using namespace std;




int Veiculo::getNumRodas(){
    return this->num_rodas;
}
void Veiculo::setNumRodas(int numRodas){
    this->num_rodas = numRodas;
    this->rodas = new Roda[numRodas];
}
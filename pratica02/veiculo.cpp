#include "veiculo.h"


int Terrestre::getCap_Pass() {
    return this->cap_pass;
}

void Terrestre::setCap_Pass(int cap) {
this->cap_pass = cap;
}

void Aquatico::setCarga_Max(int carga) {
this->carga_max = carga;
}

float Aquatico::getCarga_Max() {
    return this->carga_max;
}

void Aereo::setVel_max(int vel) {
this->vel_max = vel;
}

float Aereo::getVel_max() {
    return this->vel_max;
}

void Veiculo::mover() {
    cout<<"O veiculo : "<< this->nome<<" se moveu"<<endl;
}

void Terrestre::mover() {
    cout<<"O veiculo terrestre: "<< this->nome<<" se moveu"<<endl;
}

void Aquatico::mover() {
    cout<<"O Veiculo Aquatico: " << this->nome<<" se moveu"<<endl;
}

void Aereo::mover() {
    cout<<"O Veiculo Aereo: " << this->nome<<" se moveu"<<endl;
}

void Anfibio::mover() {
    Terrestre::mover();
    Aquatico::mover();
}

/*
 * pratica01.cpp
 *
 *  Created on: 23 de set. de 2022
 *      Author: ALUNO
 */
#include <iostream>
#include "veiculo.cpp"

using namespace std;
int main()
{
    cout<<"Primeira aplicacao C++" << endl;

    Veiculo * obj1 = new Veiculo("v1");

//    Veiculo * obj2 = new Veiculo("v2");
//
//    Veiculo * obj3 = new Veiculo("v3");
//
    obj1->setNumRodas(2);
    delete obj1;
//	delete obj2;
//	delete obj3;

    return 0;
}
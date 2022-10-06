#include <iostream>
using namespace std;

class Roda{
public:
    Roda(){
        cout<<"Objeto construido"<<endl;
    }
    ~Roda(){
        cout<<"Objeto destruido"<<endl;
    }
};

class Veiculo{
private:
    string name;
    int num_rodas;
    Roda * rodas;

public:
    Veiculo(const char *str){
        this->name=string(str);
        this->rodas = NULL;
        cout<<"Objeto construido "<< this->name <<endl;
    };
    ~Veiculo(){
        delete [] rodas;
        cout<<"Objeto destruido " << this->name<<endl;
    };
    int getNumRodas();
    void setNumRodas(int numRodas);

};
#include <iostream>
#include <string>

using namespace std;


class Veiculo{
protected:
    string nome;
public:
    Veiculo(const char * name){
    this->nome = (string) name;
    cout<<"Objeto " << this->nome<<" Construido" << endl;
    }
    virtual ~Veiculo(){
        cout<<"Objeto " << this->nome <<" destruido"<<endl;
    }
    virtual void mover() = 0;
};

class Terrestre : public Veiculo{
private:
    int cap_pass{};
protected:
    Terrestre(): Veiculo("nome"){
        this->cap_pass = 5;
        cout<<"Objeto " << nome<<" construido"<<endl;
    }
public:
    Terrestre(const char * name) : Veiculo(name){
        this->nome = name;
        this->cap_pass = 5;
    }
     virtual ~Terrestre(){
        cout<<"Objeto terrestre " << this->nome<<" destruido" <<endl;
    }

    void setCap_Pass(int cap);
    int getCap_Pass();
    void mover();
};

class Aquatico : public Veiculo{
private:
    float carga_max;
protected:
   Aquatico(): Veiculo("Nome"){

    }
public:
    Aquatico(const char * name) : Veiculo(name){
        this->nome = name;
        this->carga_max = 10;
    }
    virtual ~Aquatico(){
        cout<<"Objeto aquatico " << this->nome<<" destruido" <<endl;
    }
    void setCarga_Max(int carga);
    float getCarga_Max();
    void mover();
};

class Aereo : public Veiculo{
private:
    float vel_max;
public:
    Aereo(const char * name) : Veiculo(name){
        this->nome = name;
        this->vel_max = 100;
    }
    virtual ~Aereo(){
        cout<<"Objeto aereo " << this->nome<<" destruido" <<endl;
    }
    void setVel_max(int vel);
    float getVel_max();
    void mover();
};

class Anfibio : public virtual Terrestre ,Aquatico {
public:
    Anfibio (const char * name) :  Terrestre(name), Aquatico(name) {}

    void mover();
};
class Veiculo {

    public:
        int vel;
        int blind;
        int rodas;
        void setTipo(int tp);
        void setvelMax(int vm);
        void setArma(bool ar);
        void imp ();
    private:
        int velMax;
        int tipo;
        bool arma;
};


void Veiculo :: imp (){

    system ("cls");
    std :: cout << "********************************" << std :: endl;
     std :: cout << "Velocidade Maxima: " << velMax << std :: endl;
    std :: cout << "tipo do veiculo..: " << tipo << std :: endl;
    std :: cout << "Qtde Rodas.......: " << rodas << std :: endl;
    std :: cout << "Blindagem........: " << blind << std :: endl;
    std :: cout << "armamento........: " << arma << std :: endl;
    std :: cout << "********************************" << std :: endl;
}

class Moto : public Veiculo{
    public: 
        Moto();

};

void Veiculo :: setTipo(int tp){

    tipo = tp;

};

void Veiculo :: setvelMax(int vm){

    velMax = vm;

};

void Veiculo :: setArma(bool ar){

    arma = ar;

};


Moto :: Moto(){
    vel = 0;
    blind = 0;
    rodas = 2;
    setTipo(1);
    setvelMax(120);
    setArma(false);
}
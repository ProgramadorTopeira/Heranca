#ifdef __linux__
#define IS_LINUX true
#else 
#define IS_LINUX false
#endif
#include <iostream>
#include "Veiculo.hpp"


void Veiculo :: imp (){
    if(!IS_LINUX) system ("cls");
    else system("clear");
    std :: cout << "********************************" << std :: endl;
    std :: cout << "Velocidade Maxima: " << velMax << std :: endl;
    std :: cout << "tipo do veiculo..: " << tipo << std :: endl;
    std :: cout << "Qtde Rodas.......: " << rodas << std :: endl;
    std :: cout << "Blindagem........: " << blind << std :: endl;
    std :: cout << "armamento........: " << arma << std :: endl;
    std :: cout << "********************************" << std :: endl;
}

void Veiculo :: setTipo(int tp){

    tipo = tp;

};

void Veiculo :: setvelMax(int vm){

    velMax = vm;

};

void Veiculo :: setArma(bool ar){

    arma = ar;

};

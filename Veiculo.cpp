#ifdef __linux__
#define CLEARCMD "clear"
#else 
#define CLEARCMD "cls"
#endif
// apos verificar se o sistema e linux ele prossegue
// "ain MA TAMPINHA TA FEIO" EU SEI QUE TA FEIO MAS É ASSIM QUE ELE ACEITA O DEFINE
#include <iostream>
#include "Veiculo.hpp"


void Veiculo :: imp (){
    // aqui se n tiver essa verificação vai dar erro de bash e o user n vai saber o pq
    system (CLEARCMD);
    std :: cout << "********************************" << std :: endl;
    std :: cout << "Velocidade Maxima: " << this->velMax << std :: endl;
    std :: cout << "tipo do veiculo..: " << this->tipo << std :: endl;
    std :: cout << "Qtde Rodas.......: " << this->rodas << std :: endl;
    std :: cout << "Blindagem........: " << this->blind << std :: endl;
    std :: cout << "armamento........: " << this->arma << std :: endl;
    std :: cout << "********************************" << std :: endl;
}

// evita separar tanto as coisas
// os :: tudo bem é compreensivel (msm que eu n fizesse)
// mas quando a funcao for uma linha so deixa ela assim que fica melhor de ler

// usa mais a keyword this para acessar itens da classe
// assim vc pode definir ate msm o mesmo nome do parametro como a variavel
void Veiculo :: setTipo(int tipo){ this->tipo = tipo; };

void Veiculo :: setvelMax(int velocidadeMaxima){ this->velMax = velocidadeMaxima; };

void Veiculo :: setArma(bool has_arma){ this->arma = has_arma; };

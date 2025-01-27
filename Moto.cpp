#include "Moto.hpp"
// o arquivo cpp recebe a implmentacao das funcoes em si
// o header (hpp) so tem as declaracoes e tipagens
Moto :: Moto(){
    vel = 0;
    blind = 0;
    rodas = 2;
    setTipo(1);
    setvelMax(120);
    setArma(false);
}
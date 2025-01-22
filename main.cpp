#include <iostream>
#include "Moto.cpp"

using namespace std;

int main (){
    // Moto *v1 = new Moto(); // gerando objeto por referencia
    // evita de gerar um objeto por referencia pq vc vai essencialmente gerar um ponteiro
    // e a referencia do objeto inferido pode ser perdida
    // e a tipagem vai ficar errada, ent se vc precisar de uma func que recebe Moto e ela receber *Moto 
    // pq o tipo foi passado por referencia vc vai receber um TypeError que o compilador vai te falar
    Moto m; // gerando objeto sem ser por referencia
    m.imp();
    return 0;
}

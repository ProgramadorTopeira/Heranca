#include <iostream>
#include "Moto.cpp"

using namespace std;

int main (){
    // Moto *v1 = new Moto(); // gerando objeto por referencia
    Moto m; // gerando objeto sem ser por referencia
    m.imp();
    // v1->imp();
    return 0;
}

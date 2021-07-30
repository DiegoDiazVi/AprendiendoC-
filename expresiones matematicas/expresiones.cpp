// escirbir la esta expresion matematica en c++ a/b+1
#include <iostream>
using namespace std;

int main(){

    float a,b, resultado = 0;

    cout<<"Ingrese el valor de a: ";
    cin>>a;
    cout<<"Ingrese el valor de b: ";
    cin>>b;

    resultado = (a/b) + 1;

    // para redondear el resultado
    cout.precision(2);
    cout<<"El resultado es: "<<resultado;

    return 0;
}
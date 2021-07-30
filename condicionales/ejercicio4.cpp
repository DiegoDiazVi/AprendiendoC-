//ejercicio determinar si un numero es positivo o negativo

#include<iostream>

using namespace std;

int main(){

    int numero = 0;

    cout<<"ingresa un numero: ";
    cin>>numero;

    if (numero == 0)
    {
        cout<<"el numero es 0";
    } else if (numero>0)
    {
        cout<<"el numero es positivo";
    }else {
        cout<<"el numero es negativo";
    }
    return 0;
}
//ejercicio determinar si un numero es par o impar

#include<iostream>

using namespace std;

int main(){

    int numero = 0;

    cout<<"ingresa un numero: ";
    cin>>numero;

    if (numero == 0)
    {
        cout<<"el numero es 0";
    } else if (numero%2 == 0)
    {
        cout<<"el numero es par";
    }else {
        cout<<"el numero es impar";
    }
    return 0;
}
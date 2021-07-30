#include<iostream>

using namespace std;

int main (){

    int precio, iva = 0, total = 0;

    cout<<"Ingresa el precio del producto: ";
    cin>>precio;

    iva = precio*0.19;
    total = precio+iva;
    cout<<"El total a pagar es: $"<<total;

    return 0;
}
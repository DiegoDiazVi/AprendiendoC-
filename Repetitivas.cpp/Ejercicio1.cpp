/* 1. realizar un programa que solicite un numero del 1 al 10 y muestre su tabla de multiplicar */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int i, numero;

    do
    {
        cout<<"ingrese un numero: ";
        cin>>numero;
    } while (numero<1 or numero>10);
    
    for ( i = 1; i<=10; i++)
    {
        cout<<numero<<" x "<<i<<" = "<<numero*i<<endl;
    }
    
    getch();
    return 0;
}
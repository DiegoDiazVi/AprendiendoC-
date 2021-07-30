/*8. programa que calcule el valer de 1+3+5+...+2n-1*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int numero, i, suma = 0;

    cout<<"ingrese los numeros impares a sumar: ";
    cin>>numero;

    for (i=1; i<=2*numero-1; i+=2)
    {
        suma += i;
    }

    cout<<"la suma es: "<<suma<<endl;
    
    system ("pause");
    return 0;
}
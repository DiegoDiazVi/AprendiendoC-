/* 3. Escribir un programa que lea la entrada de un vector numerico y muestre
los numeros del vector con sus indices asociados.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int i, n, numero[100];

    cout<<"Ingrese la cantidad de numeros: ";
    cin>>n;

    for (i=0;i<n; i++)
    {
        cout<<"ingrese un numero: ";
        cin>>numero[i];
    }

    for (i=0;i<n;i++)
    {
        cout<<"El numero es: "<<numero[i];
        cout<<" y el indice es: "<<i<<endl;
    }
    
    getch();
    return 0;
}
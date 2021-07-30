//10. programa que calcule valor de 2^1+2^2+2^3+...+2^n

#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main(){

    int i, n, suma = 0, potencia = 0;

    cout<<"ingrese la potencia: ";
    cin>>n;

    for (i = 1; i<=n; i++)
    {
        potencia = pow(2,i);
        suma += potencia;
    }
    
    cout<<"la suma es: "<<suma<<endl;

    system("pause");
    return 0;
}
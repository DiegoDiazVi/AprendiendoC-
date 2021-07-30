/*6. Programa que calcule x^y, donde x y y sean enteros positivos, sin utilizar la funcion pow*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int x, y, i, elevacion = 1; 

        cout<<"ingrese el numero x: ";
        cin>>x;
        cout<<"ingrese el numero y: ";
        cin>>y;

    for (i = 1;i<=y; i++)
    {
        elevacion = elevacion*x;
    }
    
    cout<<"El resultado es: "<<elevacion<<endl;

    system ("pause");
    return 0;
}
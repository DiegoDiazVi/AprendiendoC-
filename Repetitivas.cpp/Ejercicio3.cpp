/*3. Programa que calcule y imprima la suma de los cuadros de los 10 primeros numeros mayores que cero. */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int suma=0, cuadrado, i;

    for (i=1; i<=10; i++)
    {
        cuadrado = i*i;
        suma += cuadrado; //suma = suma + cuadrado;
    }
    
    cout<<"la suma es: "<<suma<<endl;


    system("pause");
    return 0;
}
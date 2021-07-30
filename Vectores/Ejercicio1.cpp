/* 1. Escribir un programa que defina un vector de numeros y calcule la suma de sus elementos*/
#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int i, suma=0, numero[]={1,2,3,4,5};
 
    for (i=0; i<5; i++)
    {
        suma += numero[i];
    }
    cout<<"La suma es: "<<suma;
    getch();
    return 0;
}
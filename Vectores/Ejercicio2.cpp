/*2. Programa que defina un vector de numeros y calcular la multiplicacion acumulada de sus elementos*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int i, multi = 1, numero[]= {2,4,6,8,10};

    for (i=0; i<5; i++)
    {
        multi *= numero[i];
    }
    
    cout<<"La multiplicacion es: "<<multi;


    getch();
    return 0;
}
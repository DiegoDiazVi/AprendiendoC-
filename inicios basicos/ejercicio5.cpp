/* 5. escriba un programa que intercambie los avlores de dos variables*/

#include<iostream>

using namespace std;

int main(){

    int x, y, aux;

    cout<<"Ingrese el valor de x: ";
    cin>>x;
    cout<<"Ingrese el valor de y: ";
    cin>>y;

    /* 
    x= 10
    y = 5
    aux = 10
    x = 5
    */

    aux = x;
    x = y;
    y = aux; 

    cout<<"El valor de x es: "<<x<<endl;
    cout<<"El valor de y es: "<<y<<endl; 

    return 0;
}
// ejercicio de ingresar 3 numeros y un 4 para analizar si coincide con alguno de los otros 3

#include<iostream>

using namespace std;

int main(){

    int n1, n2, n3, n4;

    cout<<"ingrese un numero: ";
    cin>>n1;
    cout<<"ingrese un numero: ";
    cin>>n2;
    cout<<"ingrese un numero: ";
    cin>>n3;
    cout<<"ingrese un numero: ";
    cin>>n4;

    if (n4 == n1 or n4 == n2 or n4 == n3)
    {
        cout<<"el numero coincide con el grupo";
    }else {
        cout<<"el numero no coincide";
    }
    



    return 0;
}
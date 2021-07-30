//ejercicio ingresar una edad y decir si esta en el rango de 18 a 25 años
#include<iostream>

using namespace std;

int main(){

    int edad;

    cout<<"Ingrese su edad: ";
    cin>>edad;

    if (edad>0 and edad>=18 and edad<=25)
    {
        cout<<"Esta en el rango de edad";

    }else{
        cout<<"No esta en el rango de edad";
    }

    return 0;
}
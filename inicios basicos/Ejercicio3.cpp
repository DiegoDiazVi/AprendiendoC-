/* programa que lea la entrada estandar de los datos de una persona:
    edad: int
    sexo: char
    estatura: float
mostrar los datos */
#include<iostream>

using namespace std;

int main(){

    int edad;
    char sexo[10];
    float estatura;

    cout<<"Ingrese su edad: ";
    cin>>edad;
    cout<<"Ingrese su sexo: ";
    cin>>sexo;
    cout<<"Ingrese su estatura en metros: ";
    cin>>estatura;

    cout<<"Su edad es: "<<edad<<" anos"<<endl;
    cout<<"Su Sexo es: "<<sexo<<endl;
    cout<<"Su estatura es: "<<estatura<<" metros"<<endl;


    return 0;

}
//programa que determine el numero mayor

#include<iostream>

using namespace std;

int main(){

    int n1, n2;

    /* forma uno y larga
    cout<<"ingrese un numero: ";
    cin>>n1;
    cout<<"ingrese otro numero: ";
    cin>>n2;
    */
   // forma 2 corta
    cout<<"ingrese dos numero: ";
    cin>>n1>>n2;

    if (n1==n2)
    {
        cout<<"los numeros son iguales";
    }else if (n1>n2)
    {
        cout<<"el numero mayor es: "<<n1;
    }else{
        cout<<"el numero mayor es: "<<n2;
    }
    
    return 0;
}
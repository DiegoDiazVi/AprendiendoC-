//programa que determine el numero mayor de 3 numeros

#include<iostream>

using namespace std;

int main(){

    int n1, n2, n3;

    
    cout<<"ingrese tres numero: ";
    cin>>n1>>n2>>n3;

    if (n1 and n2 == n3)
    {
        cout<<"los numeros son iguales";
    }else if (n1>n2 and n1>n3)
    {
        cout<<"el numero mayor es: "<<n1;
    }else if (n2>n1 and n2>n3)
    {
        cout<<"el numero mayor es: "<<n2;
    }else{
        cout<<"el numero mayor es: "<<n3;
    }    
    
    return 0;
}
// suma, resta, multiplicación y división 

#include<iostream>
using namespace std;

int main(){

    int n1, n2;
    int suma = 0; 
    int resta = 0;
    int multi = 0;
    int division = 0;


    cout<<"Ingrese el primer numero: "<<endl;
    cin>>n1;
    cout<<"Ingrese el segundo numero" <<endl; 
    cin>>n2;
    
    suma = n1+n2;
    resta = n1-n2;
    multi = n1*n2;
    division = n1/n2;

    cout<<"La suma es: "<<suma<<endl; 
    cout<<"La resta es: "<<resta<<endl; 
    cout<<"La multiplicacion es: "<<multi<<endl; 
    cout<<"La division es: "<<division<<endl; 

    return 0;
}
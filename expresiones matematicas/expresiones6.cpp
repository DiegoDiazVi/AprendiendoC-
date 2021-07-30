// promedio de 4 estudiates

#include<iostream>

using namespace std;

int main(){

    float n1,n2,n3,n4, promedio = 0;

    cout<<"Ingrese la nota 1: ";
    cin>>n1; 
    cout<<"Ingrese la nota 2: ";
    cin>>n2; 
    cout<<"Ingrese la nota 3: ";
    cin>>n3; 
    cout<<"Ingrese la nota 4: ";
    cin>>n4; 

    // el *= 0.20 es lo mismo que n1 = n1 * 0.20 
    n1 *= 0.20;
    n2 *= 0.20;
    n3 *= 0.30;
    n4 *= 0.30;
    promedio = n1+n2+n3+n4;

    cout<<"El promedio es: "<<promedio;

    return 0;
}
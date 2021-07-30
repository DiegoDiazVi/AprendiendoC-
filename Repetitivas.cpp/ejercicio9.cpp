/*9. programa que calcule el valor de 1*2*3*4...*n       */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int numero, i, multiplicacion = 1;

    cout<<"ingrese el numero: ";
    cin>>numero;

    for (i=1; i<=numero; i++)
    {
        multiplicacion *= i;
    }

    cout<<"el factorial es: "<<multiplicacion<<endl;
    
    system ("pause");
    return 0;
}
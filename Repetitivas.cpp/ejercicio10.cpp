/*9. programa que calcule el valor de 1!+2!+3!+4!+...+n!       */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int numero, i, factorial = 1, suma = 0;

    cout<<"ingrese el numero: ";
    cin>>numero;
 
    
    for (i=1; i<=numero; i++)
    {
        factorial *= i;
        suma += factorial;
    }
  
    cout<<"la suma es es: "<<suma<<endl;
    
    system ("pause");
    return 0;
}
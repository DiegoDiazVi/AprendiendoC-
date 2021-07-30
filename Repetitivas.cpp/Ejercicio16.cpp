/*16. Descomponer un numero en factores  */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int numero, i;

    cout<<"ingrese el numero a descomponer: ";
    cin>>numero;

    for (i=2; numero>1; i++)
    {
        while (numero%i==0)
        {
            cout<<i<<" ";
            numero /= i;
        }   
    }
    system("pause");
    return 0;
}
/*5. Desarrolle un programa que lea un vector de enteros y determine el elemento mayor*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int n, numero[100], i, mayor = 0;

    cout<<"ingrese la cantidad de numeros: ";
    cin>>n;

    for (i=0;i<n;i++)
    {
        cout<<"ingrese un numero: ";
        cin>>numero[i];

        if(mayor<numero[i]){

            mayor = numero[i];
        }
    }
    
    cout<<"el numero mayor es: "<<mayor;

    getch();
    return 0;
}





    

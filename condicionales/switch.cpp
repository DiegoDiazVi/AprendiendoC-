//sentencia swith o menu

#include<iostream>

using namespace std;

int main(){

    int numero;
    cout<<"digita un numero entre 1 y 5: ";
    cin>>numero;
    switch (numero)
    {
    case 1:
        cout<<"Este es la opcion 1";
        break;
    case 2:
        cout<<"Este es la opcion 2";
        break;
    case 3: 
        cout<<"Este es la opcion 3";
        break;
    case 4: 
        cout<<"Este es la opcion 4";
        break;
    case 5: 
        cout<<"Este es la opcion 5";
        break;

    default:
        cout<<"opcion no valida";
        break;
    }
    return 0;
}
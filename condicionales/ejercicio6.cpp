//indicar si la salida de dato es vocal minuscula, vocal mayusucla o no es vocal

#include <iostream>
using namespace std;

int main (){

    char letra;

    cout<<"digita una letra: ";
    cin>>letra;

    switch (letra)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout<<"es una vocal minuscula";
        break;

    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout<<"es una vocal mayuscula";
        break;
    default:
        cout<<"la letra no es vocal ";
        break;
    }

    return 0;
}
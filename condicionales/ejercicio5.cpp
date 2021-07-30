//indicar si la salida de dato es vocal minuscula

#include <iostream>
using namespace std;

int main (){

    char letra;

    cout<<"digita una letra: ";
    cin>>letra;

    switch (letra)
    {
    case 'a':
        cout<<"la letra es la a";
        break;
    case 'e':
        cout<<"la letra es la e";
        break;
    case 'i':
        cout<<"la letra es la i";
        break;
    case 'o':
        cout<<"la letra es la o";
        break;
    case 'u':
        cout<<"la letra es la u";
        break;
    default:
        cout<<"la letra no es vocal minuscula";
        break;
    }

    return 0;
}
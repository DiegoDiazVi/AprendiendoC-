/* 2. Realizar un programa que lea un numero entero hasta que se introduzca un cero. en ese momento el programa
terminará y imprimira los valores mayores que cero leidos */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int numero, conteo = 0;

    do
    {
        cout<<"ingrese un numero: ";
        cin>>numero;
        if (numero>0)
        {
            conteo++;
        }
    } while (numero!=0);
    
    cout<<"el numero de valores mayores que cero fueron: "<<conteo<<endl;

    system("pause");
    return 0;
}
    

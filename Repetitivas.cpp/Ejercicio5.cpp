/*5. Programa que lea valores enteros hasta que se introduzca un valor en el rango [20-30] o el valor 0
el programa debe sumar los valores mayores a 0 */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){

    int numero, suma = 0;

    do
    {
        cout<<"ingrese un numero: ";
        cin>>numero;
        if (numero>0)
        {
            suma += numero;
        }
        
    } while ((numero!=0) and (numero<20) or (numero>30) );

    cout<<"La suma de los mayores a cero es: "<<suma<<endl;

    system ("pause");
    return 0;
}
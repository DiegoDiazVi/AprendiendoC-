//4.Ejercicio que defina un vector y muestre en la salida el orden inverso del vector 

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int i,numero[]={1,2,3,4,5};
 
    for (i=4; i>=0; i--)
    {
        cout<<"el numero es: "<<numero[i]<<endl;
    }
    
    getch();
    return 0;
}
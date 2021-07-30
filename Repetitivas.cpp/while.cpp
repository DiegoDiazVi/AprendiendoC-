/* la sentencia while 

    while(expresion logica){
        instrucciones;
    }
*/

#include <iostream>
#include <conio.h> //getch();

using namespace std;

int main (){

    int i; //iterador

    // de 1 a 100
    /*i=1;

    while (i<=100)
    {
        cout<<"el numero es: "<<i<<endl;
        i++;
    }*/


    // de 100 a 1
    i=100;

    while (i>=1)
    {
        cout<<"el numero es: "<<i<<endl;
        i--;
    }
    
    getch();
    return 0;
}
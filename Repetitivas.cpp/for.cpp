/* la sentencia for

    for(expresion1; expresion logica; expresion 2){
        instrucciones;
    }
*/
#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){

    int i;
    // de 0 a 10
    /* 
    for (i=0; i<=10; i++)
    {
        cout<<"el numero es: "<<i<<endl;
    }
    */

    // de 10 a 0

    for (i=10; i>=0; i--)
    {
        cout<<"el numero es: "<<i<<endl;
    }
    system ("pause");
    return 0;

}
/*sentencia do while

    do{
        instrucciones;
    }while(expresion logica);
*/
#include <iostream>
#include <stdlib.h> // system ("pause");

using namespace std;

int main(){

    int i;
    //1 al 10
/* i = 1;
    do
    {
        cout<<"el numero es: "<<i<<endl;
        i++; //aumenta la variable uno en uno 
    } while (i<=10);
*/
    // 10 al 1

    i = 10;
    do
    {
        cout<<"el numero es: "<<i<<endl;
        i--; //disminuye la variable uno en uno 
    } while (i>=1);
    
    system("pause");
    return 0; 
}
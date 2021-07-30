/*15. Programa que solicite al usuario un numero del 1 al 100. el programa debe generar un numero aleatorio 
en el mismo rango y preguntar al usuario si el numero es mayor o menor al que pensó hasta que adivine el numero,
mostrar el numero de intentos que llevo alcanzar este programa
//** Variable = limite_inferior + rand() % (limite_superior + 1 - limite_inferior);
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){

    int i, aleatorio, contador=0, n;

    srand(time(NULL)); //generar un numero aleatorio;
    aleatorio = 1+rand()%(100);

    do
    {
        cout<<"Ingrese un numero: ";
        cin>>n;
        if (n>aleatorio)
        {
            cout<<"\n Digite un numero menor\n"<<endl;
        }
        if (n<aleatorio)
        {
            cout<<"\n Digite un numero mayor\n"<<endl;
        }
        contador++;
    } while (n!=aleatorio);
    
    cout<<"Felicidades adivinaste el numero"<<endl;
    cout<<"numero de intentos: "<<contador;




    getch();
    return 0;
}
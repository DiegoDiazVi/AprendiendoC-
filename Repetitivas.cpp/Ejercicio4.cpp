/*4. Programa que tome la temperatura exterior cada 4 horas durante 24 horas, debe tener 6 lecturas de temperaturas al dia. 
calcular la temperatura media del día, la temperatura mas alta y la mas baja. */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    float temperatura, mayor = 0, menor = 999, i;
    float sumar_total = 0,promedio = 0;

    for (i=0; i<24; i+=4)
    {
        cout<<"ingrese la temperatura de la hora "<<i<<": ";
        cin>>temperatura;
        sumar_total += temperatura;
        if (temperatura > mayor)
        {
            mayor = temperatura;
        }
        if (temperatura<menor)
        {
            menor = temperatura;
        }
    }

    promedio = (sumar_total/6);

    cout<<"La temperatura mas alta es:"<<mayor<<endl;
    cout<<"La temperatura mas baja es: "<<menor<<endl;
    cout<<"La temperatura media es: "<<promedio<<endl;

    system ("pause");
    return 0;
}
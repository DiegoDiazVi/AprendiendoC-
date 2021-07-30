/*14. programa que permita lectura de los datos y calculo de las estadisticas.

 - Hay 5 alumnos
 - Les hacen 3 examenes
    a) cuantos pasan todos los examenes
    b) cuantos pasan al menos uno 
    c) cuantos pasaron solo el ultimo 

mostrar estadisticas 
*/
#include<iostream>
#include<conio.h>

using namespace std;
int main (){

    int i, aproTodos=0, aproUno=0, aproUlti=0;
    float examen1, examen2, examen3;

    for (i = 1; i <=5; i++)
    {
        cout<<"Digite la nota del examen 1: ";
        cin>>examen1;
        cout<<"Digite la nota del examen 2: ";
        cin>>examen2;
        cout<<"Digite la nota del examen 3: ";
        cin>>examen3;
        cout<<"\n";

        if ((examen1>=60)and(examen2>=60)and(examen3>=60))
        {
            aproTodos++;
        }
        if ((examen1>=60)or(examen2>=60)or(examen3>=60))
        {
            aproUno++;
        }      
        if ((examen1<60)and(examen2<60)and(examen3>=60))
        {
            aproUlti++;
        }
    }

    cout<<"Los que pasaron todos fueron: "<<aproTodos<<endl;
    cout<<"Los que pasaron al menos uno fueron: "<<aproUno<<endl;
    cout<<"Los que pasaron el ultimo: "<<aproUlti<<endl;

    getch();
    return 0;
}

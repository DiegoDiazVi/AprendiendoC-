/* 12. Programa que calcule el resultado de la expresion 1-2+3-4+5-6....n*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int i, n, suma = 0, resta = 0, total = 0;

    cout<<"ingrese un numero: ";
    cin>>n;

    for (i=1; i<=n; i++)
    {
        if (i%2==0)
        {
            resta -=i;
        }else{
            suma +=i;
        }   
    }
    
    total = suma+resta;
    cout<<"el resultado es: "<<total<<endl;

    getch();
    return 0;
}
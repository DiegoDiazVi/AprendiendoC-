/*13. Hacer un programa que realice la serie fibonacci -> 1,1,2,3,5,8,13...n */
#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int i, x = 0, y = 1, z = 1, n;

    cout<<"ingrese el numero: ";
    cin>>n;

    for (i=1; i<=n; i++)
    {
        z=x+y;
        cout<<z<<" ";
        x = y;
        y = z;
    }
    
    getch();
    return 0;
}
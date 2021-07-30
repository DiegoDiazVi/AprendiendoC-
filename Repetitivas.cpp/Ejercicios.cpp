
#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int i, n, j;

    cout<<"ingrese un numero: ";
    cin>>n;

    for (i=1; i<=n; i++)
    {
        for (j=1; i>=j;j++)
        {
            cout<<"*";
            cout<<"\n";
        }
        
    }

    getch();
    return 0;
}
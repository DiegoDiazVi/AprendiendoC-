/* condicional simple y doble
if(condicion){
    instruciones;
}
else{
    instrucciones;
}*/
#include<iostream>

using namespace std;

int main(){

    int numero, dato = 5;

    cout<<"Digite un numero correcto: "<<endl;
    cin>>numero;
    
    if (numero == dato)
    {
        cout<<"el numero es correcto";
    } else{
        cout<<"el numero es incorrecto";
    }
    

    return 0;
}
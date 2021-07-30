//ejercicio 11, programa que simula cajera automatico con saldo inicial de 1000 usd

#include<iostream>

using namespace std;

int main(){

    int saldo_inicial = 1000, opcion, ingreso = 0, retiro = 0;

    cout<<"\tBienvenido a su cajero automatico"<<endl;
    cout<<"1. Ingresar dinero en cuenta"<<endl;
    cout<<"2. Retirar dinero de la cuenta"<<endl;
    cout<<"3. Consultar saldo"<<endl;
    cout<<"4. Salir"<<endl;
    cin>>opcion;

    switch (opcion)
    {
    case 1:
        cout<<"Cual es la cantidad a ingresar: $";
        cin>>ingreso;
        if (ingreso>1)
        {
            saldo_inicial += ingreso;
            cout<<"El nuevo saldo en su cuenta es: $"<<saldo_inicial;

        }else{

            cout<<"Ingresa una catidad mayor a 1 usd";
        }
        break;
    case 2:
        cout<<"Cual es la cantidad a retirar: "<<endl;
        cout<<"1. $50"<<endl;
        cout<<"2. $100"<<endl;
        cout<<"3. $200"<<endl;
        cout<<"4. $300"<<endl;
        cout<<"5. $500"<<endl;
        cout<<"6. $1000"<<endl;
        cout<<"7. Ingresar un valor"<<endl;
        cin>>retiro;      
        
        switch (retiro)
        {
        case 1:
            if (saldo_inicial>=50)
            {
                saldo_inicial -= 50;
                cout<<"El nuevo saldo en su cuenta es: $"<<saldo_inicial;
                break;
            }else{
                cout<<"No tienes los fondos suficientes";
                break;
            }
            
            
            
        case 2:
            if (saldo_inicial>=100)
            {
                saldo_inicial -= 100;
                cout<<"El nuevo saldo en su cuenta es: $"<<saldo_inicial;
                break;
            }else{
                cout<<"No tienes los fondos suficientes";
                break;
            }
        case 3:
            if (saldo_inicial>=200)
            {
                saldo_inicial -= 200;
                cout<<"El nuevo saldo en su cuenta es: $"<<saldo_inicial;
                break;
            }else{
                cout<<"No tienes los fondos suficientes";
                break;
            }
        case 4:
           if (saldo_inicial>=300)
            {
                saldo_inicial -= 300;
                cout<<"El nuevo saldo en su cuenta es: $"<<saldo_inicial;
                break;
            }else{
                cout<<"No tienes los fondos suficientes";
                break;
            }
        case 5:
            if (saldo_inicial>=500)
            {
                saldo_inicial -= 500;
                cout<<"El nuevo saldo en su cuenta es: $"<<saldo_inicial;
                break;
            }else{
                cout<<"No tienes los fondos suficientes";
                break;
            }
        case 6:
            if (saldo_inicial>=1000)
            {
                saldo_inicial -= 1000;
                cout<<"El nuevo saldo en su cuenta es: $"<<saldo_inicial;
                break;
            }else{
                cout<<"No tienes los fondos suficientes";
                break;
            }
        case 7:
            retiro = 0;
            cout<<"Ingresa el valor: $"<<endl;
            cin>>retiro;
            if (saldo_inicial>=retiro)
            {
                saldo_inicial -= retiro;
                cout<<"El nuevo saldo en su cuenta es: $"<<saldo_inicial;
                break;
            }else{
                cout<<"No tienes los fondos suficientes";
                break;
            }
            
        default:
            cout<<"opcion no valida, vulva pronto";
            break;
        }
        break;
        
    case 3: 
        cout<<"El nuevo saldo en su cuenta es: $"<<saldo_inicial;
        break;
    case 4:
        cout<<"Vuelva pronto";
        break;
    default:
        cout<<"opcion no valida, vulva pronto";
        break;
    }

    return 0;
}
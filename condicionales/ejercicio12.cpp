//menu que muestre 1. el cubo de un numero 2. si es par o impar
 #include<iostream>
 #include<math.h>

 using namespace std;

 int main(){

    int opcion, numero, resultado;

    cout<<"Ingresa la opcion que quieres: "<<endl;
    cout<<"1. mostrar el cubo de un numero"<<endl;
    cout<<"2. determinar si es par o impar"<<endl;
    cout<<"3. salir"<<endl;
    cin>>opcion;

    switch (opcion)
    {
    case 1:
        cout<<"Ingresa el que quieres: "<<endl;
        cin>>numero;

        resultado = pow(numero,3);
        cout<<"el cubo es: "<<resultado;
        break;
    case 2:
        cout<<"Ingresa el que quieres: "<<endl;
        cin>>numero;

        if (numero%2==0)
        {
            cout<<"el numero es par";
        }else{
            cout<<"el numero es impar";
        }
    case 3:
        break;
    default:
        cout<<"opcion no valida";
        break;
    }

    return 0;
 }

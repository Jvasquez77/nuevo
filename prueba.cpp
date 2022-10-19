# include <stdio.h>
#include <iostream>
using namespace std;

 int main(){

    int n=0;
    int opcion=0;
    int balance=5000;
    int envio=0;
    int recibo=0;


    cout << "bienvenido al banco mas arrecho\nque quieres hacer\n\n";
    cout << "opcion 1: ver saldo\nopcion 2: enviar fondos\nopcion 3: recibir fondos\nopcion 4 : salir\n\n";

   // ver no quiero saber


    for (int i = 0; n==0; i++)
    {
        cout<<"\n\nmovimiento #"<<i<<"\n\n";
    cout << "\nopcion: ";
    cin >> opcion;
        switch (opcion)
        {
        case 1: //ver balance
            cout<<balance<<" $";
            break; 

        case 2: //enviar dinero
            cout<< "cuanto dinero quiere enviar: ";
            cin>> envio;
            if (envio>balance)
            {
                cout<<"negativo, saldo insuficiente";
            }else{
               /* cout<<"|"<<envio<<"|";*/
                balance=balance-envio;
                cout<<"excelente, has enviado :"<<envio << " $ exitosamente";
                envio=0;
            }
            break;

        case 3: // recibir dinero
            cout<< "cuanto dinero depositara: ";
            cin>> recibo;
            balance=balance+recibo;
            cout<<"excelente, has recibido :"<<recibo << " $ exitosamente";
            recibo=0;
            break;

        case 4: //salir
            n=1;
            break;       
        
        default:
        n=1;
            break;
        }
    }
    
     
     return 0;
 }

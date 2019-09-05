#include <iostream>

using namespace std;

int main() {
    int op;
    float precio;
    char claro;
    do{
        cout<<"Tipo de entrada\n";
        cout<<"1.Super Vip     precio 212\n";
        cout<<"2.Vip           precio 170\n";
        cout<<"3.Preferencial  precio 136\n";
        cout<<"4.General       precio 59\n";
        cout<<"Selecione tipo de entrada: ";
        cin>>op;
    }while(op > 4);
    if(op == 1)
        precio = 212;
    else if(op == 2)
        precio = 170;
    else if (op == 3)
        precio = 136;
    else if (op == 4)
        precio = 59;
    do{
        cout<<"Es cliente de Claro <S,s,N,n> : ";
        cin>>claro;
    }while(claro !='S' && claro !='s' && claro !='N' && claro !='n');

    if (claro == 'S'|| claro =='s')
        precio = precio * 80 / 100;

    cout<<"Monto a pagar "<<precio;

}

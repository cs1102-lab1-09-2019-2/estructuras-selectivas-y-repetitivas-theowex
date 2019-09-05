#include <iostream>
#include <string>

using namespace std;

int main() {
    string num;
    cin>>num;
    cout<<"SOAT:";
    if(int(num[4])%2 == 0)
        cout<<"Vigente";
    else
        cout<<"Vencido";
    cout<<endl<<"CITV:";
    if(int(num[5])%2 == 0)
        cout<<"Vigente";
    else
        cout<<"Vencido";
    cout<<endl<<"AUTORIZADO:";
    if(int(num[6] + num[7])%3 == 0)
        cout<<"Si";
    else
        cout<<"No";
}

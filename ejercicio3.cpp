#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, temp;
    vector<int> lista;
    cout<<"n: ";
    cin>>n;
    for(int i = 0; i < n; i++) {
        cin>>temp;
        lista.push_back(temp);
    }
    sort(lista.begin(), lista.end());
    cout<<"El valor maximo es: "<<lista[lista.size()-1];
}

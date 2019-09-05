#include <iostream>
#include <string>

using namespace std;

float calcularPromedio(int estudiantes){
    float PC1, PC2, PC3, PC4, PROYECTO, E1, E2, promedio;
    cout << "Alumno numero " << estudiantes + 1 << "\n";
    do{
        cout<<"Practica 1: ";
        cin>>PC1;
    }while (PC1 < 0 || PC1 > 20);
    do{
        cout<<"Practica 2: ";
        cin>>PC2;
    }while (PC2 < 0 || PC2 > 20);
    do{
        cout<<"Practica 3: ";
        cin>>PC3;
    }while (PC3 < 0 || PC3 > 20);
    do{
        cout<<"Practica 4: ";
        cin>>PC4;
    }while (PC4 < 0 || PC4 > 20);
    do{
        cout<<"Proyecto: ";
        cin>>PROYECTO;
    }while (PROYECTO < 0 || PROYECTO > 20);
    do{
        cout<<"Examen 1: ";
        cin>>E1;
    }while (E1 < 0 || E1 > 20);
    do{
        cout<<"Examen 2: ";
        cin>>E2;
    }while (E2 < 0 || E2 > 20);
    promedio = 0.05*PC1 + 0.1*PC2 + 0.1*PC3 + 0.15*PC4 + 0.2 * PROYECTO + 0.2*E1 + 0.2*E2 ;
    return promedio;
}

string obtenerEvento(float promedio){
    string evento1 = "ACM ICPC International Collegiate Programming Contest";
    string evento2 = "Imagine Cup";
    string evento3 = "Hackaton de Miraflores";
    string recomendacion = "Necesita mejorar.";
    if (promedio >= 18.0 && promedio <= 20.0){
        return evento1;
    }else if (promedio >= 15.0 && promedio <= 17.99){
        return evento2;
    }else if (promedio >= 12 && promedio <= 14.99){
        return evento3;
    }else{
        return recomendacion;
    }
}

int main() {
    int numAlumnos;
    do {
        cout << "Numero de alumnos: ";
        cin >> numAlumnos;
    }while (numAlumnos <= 3 || numAlumnos > 30);
    float promedio;
    string evento = "";
    int contador = 0;
    do{
        promedio=calcularPromedio(contador);
        evento = obtenerEvento(promedio);
        cout<<endl<<"Su promedio es "<<promedio<<"\n";
        cout<<"UD asistira al "<<evento<<"\n";
        contador++;
    }while (contador < numAlumnos);
    return 0;
}

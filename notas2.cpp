#include <iostream>
using namespace std;

struct alumno{
    int codigo;
    char nombre[30];
    alumno *sig;
};

alumno *cab, *aux, *aux2;

int registrar(){
    if(!cab){
        cab = (struct alumno *)malloc(sizeof(struct alumno));
        cout<<"Registre Nombre: ";
        cin>> cab->nombre;
        cab->sig = NULL;
    }
    else {
        aux = (struct alumno *)malloc(sizeof(struct alumno));
        cout<<"Registre Nombre: ";
        cin>> aux->nombre;
        aux->sig = NULL;
        aux2=cab;
        while(aux2->sig!=NULL)
            aux2 = aux2->sig;
        aux2->sig = aux;
    }
}
int mostrar(){
    for(aux=cab; aux!=NULL; aux=aux->sig){
        cout<<"Nombre: "<<aux->nombre<<endl;
    }
}
int main(){
    int opcion = 0;
    do {
        cout<<endl<<"1. Registro Estudiante"<<endl;
        cout<<"2. Mostrar Estudiantes"<<endl;
        cout<<"Opcion: ";
        cin>>opcion;
        switch (opcion)
        {
        case 1: registrar(); break;
        case 2: mostrar(); break;
        }
    } while(opcion != 5);
    return 0;
}

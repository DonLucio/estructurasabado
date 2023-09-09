#include <iostream>
using namespace std;
int a[2];
int *apuntador;
int main(){
    a[0]=1;
    a[1]=2;
    cout<<"Direccion a:"<<&a<<endl;
    cout<<"Direccion a[0]:"<<&a[0]<<endl;
    cout<<"Direccion a[1]:"<<&a[1]<<endl;
    cout<<"Contenido a[0]:"<<a[0]<<endl;
    cout<<"Contenido a[1]:"<<a[1]<<endl;
    cout<<"Apuntador:"<<apuntador<<endl;
    apuntador = &a[1];
    cout<<"Apuntador"<<apuntador<<endl;
    *apuntador = 60;
    cout<<"Contenido a[1]:"<<a[1]<<endl;
    return 0;
}
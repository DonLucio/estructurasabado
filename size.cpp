#include <iostream>
using namespace std;
struct estudiante {
    int codigo;//4
    string nombre;
    string direccion;
};
estudiante alumno [2] = { { 20232101, "Milena"},  { 20232102, "Andres"} };
int main(){
    int vector[2] = {5, 4};
    unsigned int a = 4294967295;
    cout<<"El numero maximo es: "<< a;
    cout <<endl<< "Alumno 0: " << &alumno[0] << endl <<"Alumno 1: " << &alumno[1]<<endl ;
    cout<<"Size Alumno:"<<sizeof(string);
    cout<<"Size Integer:"<<sizeof(int);
    return 0;
}
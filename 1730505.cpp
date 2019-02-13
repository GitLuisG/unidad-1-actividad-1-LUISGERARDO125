#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct jugadores{

string nombre;
string posicion;
string equipo;
int n_camiseta;

}jugador1, jugador2;

void menu(); //mustra el menu
void leer(); // visualiza el archivo CSV
void escribir(); //ingresamos los datos por consola
void mostrar(); //se ve el archivo
void salir(); //sale del programa


//****************************  M A I N *****************************
int main(){

int op2;
int op;
int op3;

do{
menu();
cout<<"ELIGE UNA OPCION: ";
cin>>op;

if(op==1){
    leer();
}else

if(op==2){
   escribir();
}else

if(op==3){
   mostrar();
}else

if(op==4){
    exit(1);
}

cout<<"\nVER EL MENU DE NUEVO?";
cout<<1= SI";
cout<<"2= NO\n";
cin>>op3;
}while(op3==1);
    return 0;
}


void menu(){
cout<<"1 - LEER ARCHIVO CSV \n\n";
cout<<"2 - ESCRIBIR ARCHIVO \n\n";
cout<<"3 - MOSTRAR CONTENIDO \n\n";
cout<<"4 - SALIR\n\n";

}


void leer(){
ifstream jugadores;
string texto;
int op;

jugadores.open("jugadores.csv",ios::in); //Se abre el archivo en modo lectura

if(jugadores.fail()){
    cout<<"NO SE PUDO ABRIR EL ARCHIVO PORQUE NO ESTA CREADO, GENERELO EN LA OPCION 2\n\n";
    system("pause");
}

else{
    cout<<"ARCHIVO LEIDO EXITOSAMENTE\n\n";
    cout<<"DESEA LEER EL CONTENIDO DEL ARCHIVO?...1 - SI, 2 - NO\n";
    cin>>op;
    if(op==1){
        mostrar();
    }
}
jugadores.close();//Cerramos el archivo
}


void escribir(){
ofstream jugadores;

jugadores.open("jugadores.csv",ios::out);

if(jugadores.fail()){
    cout<<"No se pudo abrir el archivo";
system("pause");
}
cout << "Nombre del jugador: ";
cin >> jugador1.nombre;
cout << "Equipo: ";
cin >> jugador1.equipo;
cout << "Posicion: ";
cin >> jugador1.posicion;
cout << "Numero de camiseta: ";
cin >> jugador1.n_camiseta;

jugadores<<"Nombre: "<<jugador1.nombre<<"  "<<endl;

jugadores<<"Equipo: "<<jugador1.equipo<<"  "<<endl;

jugadores<<"Posicion: "<<jugador1.posicion<<"  "<<endl;

jugadores<<"Numero de camiseta: "<<jugador1.n_camiseta<<"  "<<endl;



jugadores.close();
}


void mostrar(){
ifstream jugadores;
string texto;

jugadores.open("jugadores.csv",ios::in); //Se abre el archivo en modo lectura

if(jugadores.fail()){
    cout<<"No se pudo abrir el archivo";
system("pause");
}

while(!jugadores.eof()){
    cout<<"\n";
    getline(jugadores,texto,'\n');
    cout<<texto;
}
jugadores.close();//Cerramos el archivo

}

void salir(){
exit(1);
}
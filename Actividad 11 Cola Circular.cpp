#include <iostream>

using namespace std;

int main() {
    int valor=1,elementos=0,inicio=0,posicion=0,opcion=1;
    int colacir[5]; 
    while(opcion!=0){
        switch(opcion){
            case 1 : 
                cout<<"ingresa un valor"<<endl;
                cin>>valor;
                posicion=(inicio+elementos)%5;
                colacir[posicion]=valor;
                cout<<"Valor ingresado : "<<colacir[posicion]<<" en la posicion " <<posicion<<endl;
                elementos++; 
                break;
            case 2:
                if(elementos!=0){
                    cout<<"Fue eliminado el elemento "<<colacir[inicio]<<" de la posicion " <<inicio<<endl;
                    colacir[inicio]=NULL; 
                    inicio=(inicio+1)%5;
                    elementos--;
                }
                break;
        }
         cout<<"ingresa 1 para agregar un elemento , 2 para eliminar un elemento o 0 para salir "<<endl;
         cin>>opcion;
    }
    return 0;
}

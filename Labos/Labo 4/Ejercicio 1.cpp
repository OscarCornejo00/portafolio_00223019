#include <iostream>
using namespace std;

int h=0,x=0,e=0,suma=0;
//------ Creacion de nodo y de arbol ------
struct nodo{
    int info;
    struct nodo *izq;
    struct nodo *der;
};
typedef struct nodo Nodo;
typedef struct nodo *Arbol;

Arbol crearArbol(int x){
    Arbol p = new Nodo;
    p->info = x;
    p->izq = NULL;
    p->der = NULL;
    return p;
}

//------ Agregar nodos a un arbol ------
void asignarIzq(Arbol a, int unDato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->izq != NULL)
        cout << "Error: subarbol IZQ ya existe" << endl;
    else
        a->izq = crearArbol(unDato);
}

void asignarDer(Arbol a, int unDato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->der != NULL)
        cout << "Error: subarbol DER ya existe" << endl;
    else
        a->der = crearArbol(unDato);
}

void agregarNodo(Arbol a){
    //solicitar informacion (numero a agregar)
    int numero = 0;
    cout << "Numero a agregar: ";
    cin >> numero;
    
    Arbol p = a;
    
    //desplazarse hasta el lugar adecuado
    while(true){
        if(numero == p->info){
            cout << "Error: " << numero << " ya existe" << endl;
            return;
        }
        else if(numero < p->info){//ir a la izquierda
            if(p->izq == NULL)
                break;
            else
                p = p->izq;
        }
        else{//ir a la derecha
            if(p->der == NULL)
                break;
            else
                p = p->der;
        }
    }
    
    //agregar el nuevo nodo
    if(numero < p->info)
        asignarIzq(p, numero);
    else
        asignarDer(p, numero);
}


void niveles(Arbol a){
      
    if(a!=NULL){
        
        h++;
        niveles(a->izq);
        niveles(a->der);
        if(x<h){
            x=h;
        }
        h--;
        
    }
    
    
}

void cantidadNodos(Arbol a){
      
    if(a!=NULL){
        
        e++;
        cantidadNodos(a->izq);
        cantidadNodos(a->der);
        
        
    }
    
    
}


void sumaNodos(Arbol a){
      
    if(a!=NULL){
        
        
        sumaNodos(a->izq);
        sumaNodos(a->der);
        
        suma= suma+a->info;
    }
    
    
}

int main(){
    
    
    int variable = 0;
    cout<<"Inicializando arbol...\nValor contenido en la raiz: ";
    cin >> variable;
    
    Arbol arbol = crearArbol(variable);
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar\n\t2) Niveles"
            << "\n\t3) Cantidad de nodos \n\t4) Suma de los nodos \n\t5) Salir \n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: agregarNodo(arbol);
            break;
            case 2: niveles(arbol);
            cout<<"Los niveles son: "<<x<<endl;
            break;
            case 3: cantidadNodos(arbol);
            cout<<"La cantidad de Nodos son: "<<e<<endl;
            break;
            case 4: sumaNodos(arbol);
            cout<<"La suma de los nodos es: "<<suma<<endl;
            break;
            case 5: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
            
        }
    }while(continuar);
    
    return 0;
}

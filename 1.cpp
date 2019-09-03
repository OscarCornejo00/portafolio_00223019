#include <iostream>

using namespace std;

int main(void){
	
int numero=5;

	cout<<"Valor: " << numero << endl;
	cout<<"Direccion: "<<&numero<<endl;
	
	int *puntero = &numero;

	cout<<"puntero: "<<puntero<<endl;	
	cout << "(*puntero): "<<(*puntero)<<endl;
	cout<<"puntero: "<<&puntero<<endl;
	
	*puntero=10;
	
	cout<<"(*puntero): "<<(*puntero)<<endl;
	cout<<"Valor: "<<numero<<endl;
	
		return 0;	
	
}
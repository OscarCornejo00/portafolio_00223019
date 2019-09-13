#include <iostream>

using namespace std;

int mayor(int);



int main(){
    
    int n;
    
    cout<<"Ingresa el tamaño del arreglo: "<<endl;
    cin>>n;
     
    int mayo=mayor(n);
    
    cout<<"El numero mayor es: "<<mayo<<endl;


}

int mayor(int n){
    
    int y=0,i=0;
    
    int a[n];
    
    for(i=0; i<n; i++){
    
        cout<<"Ingresa el Numero: "<<endl;
        cin>>a[i];
        
      
          
      }    
    
    for(i=0; i<n; i++){
        
        if(a[i]>y){
          y=a[i];
          
          
    }
    }
    
    return y;

}

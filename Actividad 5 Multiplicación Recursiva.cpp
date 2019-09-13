#include <iostream>

using namespace std;

int multi(int a, int b){
    if (b==1){
        cout<<"b= "<<b<<" caso base"<<endl;
        
        return a;
    }
    
    else{
        int x =multi(a,b-1);
        
        cout<<"b= "<<b<<" x= "<<x<<endl;
        
        return x+a;
    }
    
    
}
int main(void) {
    int m=0, n=0;
    
    cout<<"ingrese el primer valor a multiplicar "<<endl;
    cin>>m;
    cout<<"ingrese el segundo valor a multiplicar "<<endl;
    cin>>n;
    
    cout<<"la multiplicacion es: "<<endl;
    int r = multi(m,n);
    cout<<"Resultado: "<<r<<endl;

    return 0;
}

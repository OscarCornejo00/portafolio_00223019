#include <iostream>

using namespace std;

int medios(int a, int b){
    
    if (b==a){
        
        //cout<<"b= "<<b<<" caso base"<<endl;

        return b;
    }

    else{
        
        
        int z = b-1;
        
        
        

        cout<<"z= "<<z<<endl;

        return medios (a,z);
    }


}
int main(void) {
    int x=0, n=0;

    cout<<"ingrese el primer valor: "<<endl;
    cin>>x;
    cout<<"ingrese el segundo valor:  "<<endl;
    cin>>n;
    cout<<endl;
    
   
    if(x<n){
        
        cout<<"Los valores entre "<<x<<" y "<<n<<" son: "<<endl;
        int r = medios(x,n);
    
    }
    else{
        
        cout<<"Los valores entre "<<n<<" y "<<x<<" son: "<<endl;
        int r = medios(n,x);
        
    }
    return 0;
}

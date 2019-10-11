#include <iostream>
#include <vector>


using namespace std;

vector <int> lista;

int n=0;
int binario(int num){
    if(num/2== 1) {
      lista.insert(lista.begin(),num%2);
      lista.insert(lista.begin(),num/2);
       n++;
        return 0;
    }
    else{
       lista.insert(lista.begin(), num%2);
     
       n++;
       binario(num/2);
    }
}

int main() {
    int num=0;
    
    cout<<"ingrese un numero base 10 : "; cin>>num;
    
    binario(num);
    
    for(int i=0; i<=n; i++){
        cout<<" "<<lista[i]<<" ";
    }
}

#include <iostream>
#include <cmath>

using namespace std;

long double aproximada(int n, long double suma){

    if (n==0){
    
        return suma;
    }
    else{
    
        return suma +((pow(-1,n+1))/((2*n)-1)) + aproximada(n-1,suma);
    }
}

int main(void){

    int n=0;
    
    cout<<"hasta donde llega la sumatoria? "<<endl;
    cin>>n;
    
    cout<<4*aproximada(n,0);
    
    return 0;
}

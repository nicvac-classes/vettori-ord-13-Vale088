#include <iostream>
using namespace std;

int main() { 
    int n,i,j,t;
    bool scambio;
    cout<<"quanti numeri vuoi inserire?"<<endl;
    cin>>n;
    int numeri[n];
    i=0
    scambio= true;
    while (i<n) {
        numeri[i]= rand()%(n*10);
        i=i+1;

    } 
    while (i<=n-1 && scambio) {
        scambio=false;
        j=0;
        while(j<=n-2-i){
            if(numeri[j]>numeri[j+1]) {
                t=numeri[j];
                numeri[j]=numeri[j+1];
                numeri[j+1]=t;
                scambio=true;
            } 
            j=j+1;
              }  
            i=i+1;
          
      } 
      i=0;
      j=0;
      while(i<n) {
        if(numeri[i]%2==0) {
            cout<<"il " <<j+1 << "numero pariè " << numeri[i]<<endl;
            j=j+1;
            }else{ 
                cout<<"il " <<j+1<<"numero dispari è "<<numeri[i]<<endl;
        }
        i=i+1;
      }
    }
    }

//LEGGERE LE ISTRUZIONI NEL FILE README.md

#include<iostream>
#include<string>

using namespace std;
void pedir_elementos(int *arreglo, const int M);
void imprimir_arreglo(int *arreglo, const int M);
void reflejar_arreglo(int *arreglo, const int M);
int main(){
    cout <<"Reflejo del arreglo" << endl <<endl;
    const int M=10;
    int arreglo[M];
    pedir_elementos(arreglo,M);
    imprimir_arreglo(arreglo, M);
    
    cout<<"El arreglo invertido es: ";
    reflejar_arreglo(arreglo, M);
    
    }
    
    void pedir_elementos(int *arreglo, const int M){
     cout<<"Digite los " << M << " numeros del arreglo: \n";
    for (int i=0;i<M;i++){
        cin>>arreglo[i];}}
        
        void imprimir_arreglo(int *arreglo, const int M){
            cout<<"El arreglo es: " <<"{";
    for (int i=0;i<M;i++){
        cout<<*arreglo<<" ";
        arreglo++;}
        cout<<"}";
        }
            
        void reflejar_arreglo(int *arreglo, const int M){
           int temp,j;
            cout<<" El arreglo invertido es: " <<"{";
           for( j=M-1;j>0;j--){
               cout<< arreglo[j] <<" ";
               }
               cout<<"}";
              
        }

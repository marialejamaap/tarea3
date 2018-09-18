// Example program
#include <iostream>
#include <string>
using namespace std;
void pedir_arreglo(int *arreglo,const int M);
int mayor_num(int *arreglo, const int M);
int min_num(int *arreglo, const int M);

int main()
{
    int z,k;
const int M=10;
int arreglo[M];
pedir_arreglo(arreglo,M);
z=mayor_num(arreglo,M);
k=min_num(arreglo,M);
cout<<"\n el mayor numero es: " << z;
cout<<"\n el menor numero es: " << k;
}

void pedir_arreglo(int *arreglo,const int M){
   cout<<"Digite los " << M << " numeros del arreglo: \n";
    for (int i=0;i<M;i++){
       
        cin>>arreglo[i];
        cout<<endl;
        }
    }
    
    
    int mayor_num(int *arreglo, const int M){
        int mayor=0;
    for (int i=0;i<M;i++){
        if (arreglo[i]>mayor)
        {
            mayor=arreglo[i];
            }
        }
        return mayor;
        }
        
        int min_num(int *arreglo, const int M){
            int menor;
            menor=mayor_num(arreglo,M);
            for (int i=0;i<M;i++){
                if(arreglo[i]<menor){
                menor=arreglo[i];
                }
                }
                return menor;
            }

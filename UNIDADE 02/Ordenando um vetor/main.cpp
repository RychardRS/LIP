#include <iostream>
#define MAX 100

using namespace std;

int ordenar(int n, int v[MAX]);

int main()
{
    /*Ordenando um vetorEscreva uma função que recebe um array de inteiros v,
    o seu número de elementos n, e ordena os elementos de v em ordem decrescente.
    Faça um programa que lê a dimensão do vetor, os elementos dele e depois imprime o vetor ordenado.*/
    int n, v[MAX], i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"[ ";
    for(i=0;i<n;i++){
        if(i<n-1){
            cout<<v[i]<<" , ";
        }else{
            cout<<v[i];
        }
    }
    cout<<" ]";
    cout<<endl;
    ordenar(n, v);
    cout<<"[ ";
    for(i=0;i<n;i++){
        if(i<n-1){
            cout<<v[i]<<" , ";
        }else{
            cout<<v[i];
        }
    }
    cout<<" ]";
    return 0;
}

int ordenar(int n, int v[MAX]){
    int i, j, aux, ultimo=n-1;
    for(i=0;i<ultimo;i++){
        for(j=0;j<ultimo;j++){
            if(v[j]<v[j+1]){
                aux=v[j+1];
                v[j+1]=v[j];
                v[j]=aux;
            }
    }
    }
    return v[MAX];
}

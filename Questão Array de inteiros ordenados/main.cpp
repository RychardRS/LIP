#include <iostream>
#define MAX 30

using namespace std;

int retornar(int v[MAX], int n);

int main()
{
    /*Escreva uma fun��o f que recebe um array de inteiros v e o seu n�mero de elementos 2 <= n <= 30.

A fun��o f deve retornar 1 se os elementos de v est�o ordenados em ordem crescente,
2 se eles est�o ordenados em ordem descrescente e 0 caso eles n�o estejam ordenados.

Fa�a a leitura/escrita dos dados na fun��o principal (main).*/

    int vetor[MAX], i, n;
    cin>>n;
    for(i=0;i<n;i++){
        cin >> vetor[i];
    }
    retornar(vetor, n);
    if(retornar(vetor, n)==1){
        cout<<"Ordem Crescente"<<endl;
    }else if(retornar(vetor, n)==2){
        cout<<"Ordem Decrescente"<<endl;
    }else{
        cout<<"Nao estao ordenados"<<endl;
    }
    return 0;
}

int retornar(int v[MAX], int n){
    int i, maiorNumero, menorNumero, cont=0, cont2=0;
    for(i=0;i<n;i++){
        if(i==0){
            menorNumero=v[i];
        }
        if(v[i]>menorNumero){
            cont++;
        }
        menorNumero=v[i];
    }
    if(cont==n-1){
        return 1;
    }

    for(i=0;i<n;i++){
        if(i==0){
            maiorNumero=v[i];
        }
        if(v[i]<maiorNumero){
            cont2++;
        }
        maiorNumero=v[i];
    }
    if(cont2==n-1){
        return 2;
    }else if(cont!=n-1){
        return 0;
    }
}

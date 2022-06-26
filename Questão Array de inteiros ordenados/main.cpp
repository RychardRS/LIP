#include <iostream>
#define MAX 30

using namespace std;

int retornar(int v[MAX], int n);

int main()
{
    /*Escreva uma função f que recebe um array de inteiros v e o seu número de elementos 2 <= n <= 30.

A função f deve retornar 1 se os elementos de v estão ordenados em ordem crescente,
2 se eles estão ordenados em ordem descrescente e 0 caso eles não estejam ordenados.

Faça a leitura/escrita dos dados na função principal (main).*/

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

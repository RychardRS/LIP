#include <iostream>
#include <algorithm>
#define MAX 100

using namespace std;

int vetores(int v1[MAX], int v2[MAX], int v3[MAX], int n);

int main()
{
    /*Juntando VetoresEscreva uma função que recebe três vetores de
    inteiros v1, v2 e v3,e o número de elementos n de v1 e v2
    (assuma que ambos possuem o mesmo número de elementos). Essa
    função deve preencher o vetor v3 com os elementos de v1 e v2 de
    maneira alternada da seguinte forma: o primeiro elemento de v3 deve
    ser o menor elemento de v1, o segundo elemento de v3 deve ser o maior
    elemento de v2, o terceiro elemento de v3 deve ser o segundo menor
    elemento de v1, o quarto elemento de v3 deve ser o segundo maior
    elemento de v2, e assim por diante. Faça um programa que lê o tamanho
     dos vetores n, os elementos de v1 e v2 e finalmente imprime o vetor v3.*/
     int v1[MAX], v2[MAX], v3[MAX], i, n;
     cin>>n;
     for(i=0;i<n;i++){
        cin>>v1[i];
     }
     /*for(i=0;i<n;i++){
        cin>>v2[i];
     }*/
     vetores(v1, v2, v3, n);
    return 0;
}

int vetores(int v1[MAX], int v2[MAX], int v3[MAX], int n){
    int i, menorValor, maiorValor, aux, cont=0, j;
    /*sort(v1, v1+n);*/
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(v[i]>v[j]){

            }

        }
    }
    for(i=0;i<n;i++){
        cout<<v1[i]<<"     ";
     }
}

//essa questão tem um erro, depois faço a correção

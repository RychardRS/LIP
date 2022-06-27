#include <iostream>
#include <algorithm>
#define MAX 100

using namespace std;

int crescente(int v[MAX]);
int decrescente(int v[MAX]);

int main()
{
    /*Implemente um programa que recebe como entrada um vetor e
     imprima os elementos do vetor em ordem crescente, depois em
      ordem decrescente e por fim os valores do vetor original.
      Para isso você deverá implementar pelo menos duas funções

função para alterar um vetor e deixar o mesmo em ordem crescente
função para alterar um vetor e deixar o mesmo em ordem decrescente
Atenção: as funções deverão ser utilizadas para a resolução do problema.
A resolução do problema deve obrigatoriamente utilizar funções.*/
    int i, v[MAX], v2[MAX];
    for(i=0;i<5;i++){
        cin>>v[i];
    }
    for(i=0;i<5;i++){
        v2[i]=v[i];;
    }
    crescente(v);
    for(i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    decrescente(v);
    for(i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<5;i++){
        cout<<v2[i]<<" ";
    }
    return 0;
}

int crescente(int v[MAX]){
    sort(v, v+5);
    return v[MAX];
}

int decrescente(int v[MAX]){
    reverse(v, v+5);
    return v[MAX];
}

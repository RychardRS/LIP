#include <iostream>
#include <algorithm>
#define MAX 10

using namespace std;

int main()
{
    /*Faça um programa para unir dois vetores de inteiros em ordem crescente.
    O programa deve primeiro perguntar a dimensão de cada vetor de entrada.
    Considere vetores com no máximo 10 elementos cada.*/
    int i, j, n1, n2, aux, v1[MAX], v2[MAX];
    cin>>n1>>n2;
    for(i=0;i<n1;i++){
        cin>>v1[i];
    }
    for(i=n1;i<n1+n2;i++){
        cin>>v2[i];
        v1[i]=v2[i];
    }
    sort(v1, v1+n1+n2);
    for(i=0;i<n1+n2;i++){
        cout<<v1[i]<<"  ";
    }
    return 0;
}

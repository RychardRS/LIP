#include <iostream>
#define MAX 30
using namespace std;

int main()
{
    /*Escreva um programa que imprime os elementos em comum
entre dois vetores v1 e v2. Se não há elementos em
comum entre eles, imprima Nenhum.

Você receberá como entrada o número de elementos n1 <= 30
de v1, os elementos de v1, o número de elementos de
n2 <= 30 de v2, e os elementos de v2.*/

    int n1, n2, v1[MAX], v2[MAX], i, j, cont=0;
    cin>>n1;
    for(i=0;i<n1;i++){
        cin>>v1[i];
    }
    cin>>n2;
    for(i=0;i<n2;i++){
        cin>>v2[i];
    }
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(v1[i]==v2[j]){
                cout<<v1[i]<<" ";
                cont++;
            }
        }
    }
    if(cont==0){
        cout<<"Nenhum"<<endl;
    }
    return 0;
}

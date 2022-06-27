#include <iostream>
#define MAX 30
using namespace std;

int main()
{
    /*Escreva um programa que recebe um número inteiro n <= 30 e em seguida lê os os n elementos de um vetor.

O seu programa deve imprimir o valor que ocorre mais vezes no vetor.
 Em caso de dois valores ocorrerem o mesmo número de vezes, imprima o menor deles.*/
    int n, i, v[MAX], cont=0, j, maisVezes=1, auxiliar, menorNumero, cont2=0, cont3=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>v[i];
        if(i==0){
            menorNumero=v[i];
        }else if(v[i]<menorNumero){
            menorNumero=v[i];
        }
    }
    for(i=0;i<n;i++){
        cont=0;
        for(j=0;j<n;j++){
            if(v[i]==v[j]){
                cont++;
            }
            if(cont>maisVezes){
                auxiliar=v[i];
                cont2++;
                maisVezes=cont;
            }
        }
    }

    if(cont2==0){
        cout<<menorNumero<<endl;
    }else{
        cout<<auxiliar<<endl;
    }

    return 0;
}

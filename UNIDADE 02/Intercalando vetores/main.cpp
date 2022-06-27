#include <iostream>
#define MAX 10

using namespace std;

int intercalarVetores(int v1[MAX], int v2[MAX], int aux);

int main()
{
    /*Implemente uma função que receba como parâmetros de entrada
dois vetores de números inteiros de tamanhos diferentes
(0 <= tamanho <= 10).
A função deve armazenar em um vetor de saída a
intercalação dos dois vetores de entrada, sendo esta dada
pelo 1o. elemento do 1o. vetor, seguido pelo 1o. elemento
do 2o. vetor, seguido pelo 2o. elemento do 1o. vetor, seguido
pelo 2o. elemento do 2o. vetor e assim sucessivamente.
Caso os vetores não tenham o mesmo tamanho, os elementos do maior vetor
devem aparecer consecutivamente no vetor, já que não há mais como intercalá-los
com elementos do menor vetor.
A função main deve ler o tamanho e valores dos dois vetores,
realizar uma chamada à função e exibir o resultado da função
implementada.*/
    int v1[MAX], v2[MAX], tamanho, tamanho2, i, aux;
    cin>> tamanho;
    for(i=0;i<tamanho;i++){
        cin>>v1[i];
    }
    cin>>tamanho2;
    aux=tamanho+tamanho2;
    for(i=0;i<tamanho2;i++){
        cin>>v2[i];
    }
    for(i=0;i<aux;i++){
        cout<<intercalarVetores(v1, v2, aux)<<" ";
    }
    return 0;
}

int intercalarVetores(int v1[MAX], int v2[MAX], int aux){
    int v3[MAX], i, j=0;
    for(i=0;i<aux;i=i+2){
        v3[i]=v1[j];
        j++;
    }
    j=0;
    for(i=1;i<aux;i=i+2){
        v3[i]=v2[j];
        j++;
    }

    return v3[MAX];
}

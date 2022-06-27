#include <iostream>
#include <cstring>
#define MAX 50

using namespace std;

int main()
{
    /*PalíndromoUm palíndromo é uma palavra que se pode ler,
    indiferentemente, da esquerda para a direita ou vice-versa.
    Faça um programa que lê uma palavra e imprime na tela se essa palavra é um palíndromo.*/

    int i, j, aux;
    char palavraInvertida[MAX], palavra[MAX];
    cin>>palavra;
    for(i=0;i<strlen(palavra);i++){
        if(i==strlen(palavra)-1){
            for(j=0;j<strlen(palavra);j++){
                palavraInvertida[j]=palavra[i];
                i--;
            }
            i=strlen(palavra);
        }
    }

    aux=strcmp(palavra, palavraInvertida);
    if(aux==0){
        cout<<palavra<<" eh um palindromo"<<endl;
    }else{
        cout<<palavra<<" nao eh palindromo"<<endl;
    }
    return 0;
}

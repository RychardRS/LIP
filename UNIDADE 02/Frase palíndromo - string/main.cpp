#include <iostream>
#include <cstring>
#include <string.h>
#define MAX_FRASE 100

using namespace std;

bool verificar(char frase[MAX_FRASE]);

int main()
{
   /*Frase PalíndromoUm palíndromo é uma palavra ou frase com a propriedade de
   poder ser lida tanto da direita para a esquerda como da esquerda para a direita.
   Normalmente são desconsiderados os espaços entre palavras e os sinais ortográficos.
    Faça uma função que determine se uma frase é um palíndromo ou não.*/
    char frase[MAX_FRASE];
    cin.getline(frase, MAX_FRASE);

    if(verificar(frase)==true){
        cout<<"\""<<frase<< "\""<<" eh palindromo"<<endl;
    }else{
        cout<<"\""<<frase<< "\""<<" nao eh palindromo"<<endl;
    }
    return 0;
}

bool verificar(char frase[MAX_FRASE]){
    int i, j, aux;
    char fraseInvertida[MAX_FRASE];
        for(i=0;i<=strlen(frase);i++){
        if(i==strlen(frase)-1){
            for(j=0;j<=strlen(frase);j++){
                fraseInvertida[j]=frase[i];
                i--;
            }
            i=strlen(frase);
        }
    }
    aux=strcmp(frase, fraseInvertida);

    if(aux==0){
        return true;;
    }else{
        return false;
    }
}

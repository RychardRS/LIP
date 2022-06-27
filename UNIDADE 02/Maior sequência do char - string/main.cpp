#include <iostream>
#include <cstring>
#define MAX 100

using namespace std;

int maiorSequencia(char S[MAX], char c);

int main()
{
    /*Maior sequência do charFaça uma função que, dada uma string s e
    um caracter c, determine o tamanho da maior seqüência consecutiva de caracteres c em s.*/
    char S[MAX], c;
    cin>> S >> c;
    cout<<"String: "<<S<<endl;
    cout<<"Char: "<<c<<endl;
    cout<<"Tamanho: "<<maiorSequencia(S, c)<<endl;
    return 0;
}

int maiorSequencia(char S[MAX], char c){
    int cont=0, i, maior=0;
    for(i=0;i<strlen(S);i++){
        if(c==S[i]){
            cont++;
            if(cont>maior){
                maior=cont;
            }
        }else{
            cont=0;
        }
    }
    return maior;
}

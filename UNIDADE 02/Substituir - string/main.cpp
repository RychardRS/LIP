#include <iostream>
#include <cstring>
#define MAX_FRASE 100
using namespace std;

int main()
{
    /*SubstituirFaça um programa que, dada uma string s e
    dois chars c1 e c2, substitui todas as ocorrência de c1 em s por c2 e vice-versa.*/

    char frase[MAX_FRASE], c1, c2, aux;
    int i;
    cin.getline(frase, MAX_FRASE);
    cout<<frase<<" =>"<<endl;
    cin>>c1>>c2;
    for(i=0;i<strlen(frase);i++){
        if(c1==frase[i]){
            aux=c2;
            frase[i]=aux;
            i++;
        }
        if(c2==frase[i]){
            aux=c1;
            frase[i]=aux;
        }

    }
    cout<<frase<<endl;

    return 0;
}

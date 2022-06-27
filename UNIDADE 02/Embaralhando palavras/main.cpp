#include <iostream>
#include <cstring>

#define MAX_PALAVRA 100

using namespace std;

char embaralhar(int tamanho);

int main()
{
    /*Embaralhando palavrasEscreva uma função para embaralhar uma string s1
    com uma string s2 e colocar o resultado em uma string s3.*/
    int tamanho;
    embaralhar(tamanho);
    return 0;
}

char embaralhar(int tamanho){
    int i, j=0;
    char s1[MAX_PALAVRA], s2[MAX_PALAVRA], s3[MAX_PALAVRA];
    cin>> s1 >> s2;
    if(strlen(s1)>strlen(s2)){
    for(i=0;i<strlen(s1);i++){
        cout<<s1[i]<<s2[i];
    }
    }else if(strlen(s2)>strlen(s1)){
    for(i=0;i<strlen(s2);i++){
        cout<<s1[i];
        cout<<s2[i];
    }
    }else{
        for(i=0;i<strlen(s1);i++){
        cout<<s1[i];
        cout<<s2[i];
    }
    }

}

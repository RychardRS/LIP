#include <iostream>

using namespace std;

int somaDivisores(int n, int k, int &copia);

int main()
{
    /*# Números AmigosConsidere a função SD(n) que retorna o
    somatório dos divisores de n sem incluir o próprio n.
    Por exemplo, SD(20) = 1 + 2 + 4 + 5 + 10 = 22. Dizemos
    que dois números diferentes a e b são amigos se SD(a) = b e
    SD(b) = a. Faça uma função que determine (retornando verdadeiro ou falso)
    se dois números são amigos. Utilizando essa função, faça um programa que
    leia do usuário um número inteiro n>=2 e imprima na tela todos os números amigos entre 2 e n*/

    int n, k, copia;
    cin>>n;
    for(k=1;k<=n;k++){
        if(somaDivisores(n, k, copia)==true){
            cout<<k<<" amigo de "<<copia<<endl;
        }
    }

    return 0;
}

int somaDivisores(int n, int k, int &copia){
    int soma=0, i, soma2=0, j, x;
    copia=0;
    for(i=1;i<k;i++){
        if(k%i==0){
            soma=soma+i;
        }
    }
    for(j=1;j<=n;j++){
        if(j==soma){
            copia=j;
            for(x=1;x<j;x++){
                if(j%x==0){
                    soma2=soma2+x;
                }
            }
        }
    }
    if(soma==copia && soma2==k){
        return true;
    }else{
        return false;
    }

}

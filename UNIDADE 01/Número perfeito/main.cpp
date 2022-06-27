#include <iostream>

using namespace std;

int main()
{
    /*Número PerfeitoUm número perfeito é um número natural para o
    qual a soma de todos os seus divisores (excluindo ele mesmo) é
    igual ao próprio número. Por exemplo, 6 é um número perfeito pois 6 = 1 + 2 + 3.
    Escreva uma programa que, dado um número inteiro n>=2, imprima na tela todos os números perfeitos menores que n.*/
    int n, divisores, i, soma=0, cont=1;
    cin>>n;
    while(cont<=n-1){
    for(i=1;i<=cont-1;i++){
        divisores=cont%i;
        if(divisores==0){
            soma=soma+i;
        }
        if(i==cont-1 && soma==cont){
        cout<<soma<<endl;
        }

    }
    soma=0;
    cont++;
    }

    return 0;
}

#include <iostream>

using namespace std;

int fatorial(int n);
int somaFat(int num);

int main()
{
    /*Soma fatoriaisFaça uma função para calcular o fatorial de um número n.
    Utilizando essa função, implemente uma função que recebe um número inteiro
    n>=1 e calcula o somatório dos fatoriais dos números entre 1 e n (1! + 2! + 3! + … + n!)*/
    int num;
    cin>>num;
    cout<<somaFat(num)<<endl;
    return 0;
}

int somaFat(int num){
    int j, soma=0;
    for(j=1;j<=num;j++){
        soma=soma+fatorial(j);
    }
    return soma;
}

int fatorial(int n){
    int resultadoFat=1, i;
    for(i=1;i<=n;i++){
        resultadoFat=resultadoFat*i;
    }
    return resultadoFat;
}



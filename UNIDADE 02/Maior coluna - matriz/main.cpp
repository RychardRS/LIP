#include <iostream>
#define MAX_L 10
#define MAX_C 10

using namespace std;

int maior(int M[MAX_L][MAX_C], int m, int n);

int main()
{
    /*Implemente uma função que receba como parâmetro de entrada
uma matriz de números inteiros de tamanho qualquer e o seu tamanho.
A função a ser implementada deve armazenar em um parâmetro
de saída dado por um vetor o maior elemento de cada coluna.
A função main deve ler as dimensões da matriz, cada
um dos seus elementos e imprimir o vetor calculado pela
função. A matriz tem largura/altura
máximas igual a 10.*/
    int M[MAX_L][MAX_C], m, n, i, j;
    cin>>m >> n;
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            cin>>M[i][j];
        }
    }
    maior(M, m, n);
    return 0;
}

int maior(int M[MAX_L][MAX_C], int m, int n){
    int i, j, maiorColuna=-9999999, V[MAX_C];
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            if(M[j][i]>maiorColuna){
                maiorColuna=M[j][i];
                V[j]=maiorColuna;
            }
        }
        cout<<V[j]<<" ";
        j++;
    }

}

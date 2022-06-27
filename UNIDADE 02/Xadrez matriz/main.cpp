#include <iostream>
#define MAX_L 100
#define MAX_C 100

using namespace std;

bool ataque(int m, int M[MAX_L][MAX_C]);

int main()
{
    /*No xadrez a torre se move em linha reta horizontalmente e verticalmente.
    Considere uma matriz quadrada M de dimensão n x n (n <= 100) que representa
    um tabuleiro de xadrez no qual podemos colocar torres da mesma cor.
    Um número 1 na matriz representa uma posição com uma torre e um 0 representa um espaço livre.

Faça uma função que, dado um tabuleiro de dimensão n x n,
determine (retornando true/false) se alguma das torres pode atacar outra torre. Por exemplo, no tabuleiro

0 1 0 1

0 0 0 0

0 0 1 0

0 0 0 0

​temos 3 torres e as duas torres na primeira linha podem atacar-se. Portanto, a função deve retornar true. Já no tabuleiro

0 1 0

1 0 0

0 0 1

a função deve retornar false (porque nenhuma das 3 torres pode atacar-se)

Faça um bloco main que leia a dimensão do tabuleiro e os valores da matriz.
Depois, utilizando a função anterior, imprima uma mensagem informando se existem ou não torres que podem atacar-se. */

    int i, j, m, matriz[MAX_L][MAX_C];
    cin >> m;
    for(i=1;i<=m;i++){
        for(j=1;j<=m;j++){
            cin>> matriz[i][j];
        }
    }

    if(ataque(m, matriz)==true){
        cout<<"as torres podem atacar-se"<<endl;
    }else{
        cout<<"as torres nao podem atacar-se"<<endl;
    }
    return 0;
}

bool ataque(int m, int M[MAX_L][MAX_C]){
    int i, j, contColuna=0, contLinha=0;
    bool atacar=false;
    for(i=1;i<=m;i++){
        for(j=1;j<=m;j++){
            if(M[i][j]==1){
                contLinha++;
            }
            if(contLinha>=2){
                atacar=true;
                return atacar;
            }
        }
        contLinha=0;
    }

    for(i=1;i<=m;i++){
        for(j=1;j<=m;j++){
            if(M[j][i]==1){
                contColuna++;
            }
            if(contColuna>=2){
                atacar=true;
                return atacar;
            }
        }
        contColuna=0;
    }
    return atacar;
}

#include <iostream>
#define MAX_L 30
#define MAX_C 30

using namespace std;

void valoresLinha(int M[MAX_L][MAX_C], int m, int n);
float mediaElementos(float media, int n);

int main()
{
    /*Media de Elementos de uma linhaEscreva uma função que recebe uma matriz M,
    o seu número de linhas e de colunas. Para cada linha de M, a função deve
    imprimir os elementos dessa linha que são maiores que a média dos elementos da linha.
    Considere escrever uma função auxiliar para calcular a média dos elementos de uma linha.*/
    int m, n, matriz[MAX_L][MAX_C], i, j;
    cin>> m >> n;
    valoresLinha(matriz, m, n);

    return 0;
}

void valoresLinha(int M[MAX_L][MAX_C], int m, int n){
    int i, j, soma=0, cont=0;
    float media;
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            cin>>M[i][j];
            soma=soma+M[i][j];
            if(j==n){
            media=mediaElementos(soma, n);
            cout<<"[";
                for(j=1;j<=n;j++){
                    if(M[i][j]>=media){
                        if(cont==0){
                            cout<<M[i][j];
                            cont++;
                        }else{
                            cout<<", "<<M[i][j];
                        }
                    }
                }
                cout<<"]"<<endl;
                cont=0;
            }

        }

        soma=0;
    }

}
float mediaElementos(float media, int n){
    float mediaLinha;
    mediaLinha=media/n;
    return mediaLinha;
}

#include <iostream>
#include <iomanip>
#define MAX_L 30
#define MAX_C 30
using namespace std;

int main()
{
    /*Valores da MatrizFaça um programa que, dados os números n, m (n,m <=30),
    lê do usuário os valores de uma matriz A de inteiros de dimensão n x m.
    Depois, o programa deve imprimir o menor elemento, o maior elemento e a
    média (com 2 casas decimais) dos valores da matriz.*/

    int n, m, i, j, A[MAX_L][MAX_C], maiorElemento, menorElemento;
    float media, soma=0;
    cin>>n >> m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cin>>A[i][j];
            if(i==1 && j==1){
                maiorElemento=A[i][j];
                menorElemento=A[i][j];
            }
            if(A[i][j]>maiorElemento){
                maiorElemento=A[i][j];
            }
            if(A[i][j]<menorElemento){
                menorElemento=A[i][j];
            }
            soma=soma+A[i][j];
        }
    }
    media=soma/(n*m);
    cout<<"Menor valor: "<<menorElemento<<endl;
    cout<<"Maior valor: "<<maiorElemento<<endl;
    std::cout << std::fixed;
    cout<<"Media: "<<setprecision(2)<<media<<endl;


    return 0;
}

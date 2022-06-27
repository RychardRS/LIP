#include <iostream>
#define MAX_L 30
#define MAX_C 30
using namespace std;

int main()
{
    /*Faça um programa que, dados os números n, m (n,m <=30),
    lê do usuário os valores de uma matriz A de inteiros de dimensão n x m.
    Depois, o programa deve ler um número x e imprimir uma mensagem indicando se
    a matriz possui algum elemento cujo valor é x.*/

   int x, n, m, i, j, matriz[MAX_L][MAX_C], cont=0;
    cin>> n >> m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cin>>matriz[i][j];
        }
    }
    cin>>x;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(matriz[i][j]==x){
                cont++;
            }
        }
    }
    if(cont==0){
        cout<<"Matriz nao tem elemento: "<<x<<endl;
    }else{
        cout<<"Matriz tem elemento: "<<x<<endl;
    }


    return 0;
}

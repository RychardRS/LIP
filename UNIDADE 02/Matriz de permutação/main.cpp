#include <iostream>
#define MAX 30
using namespace std;

int main()
{
    /*Matriz de permutaçãoUma matriz quadrada é chamada
    matriz de permutação se seus elementos são apenas 0’s e 1’s e
    se em cada linha e coluna da matriz existe apenas um único valor 1.
    Faça um função que determine se uma matriz de dimensão n x n (n<=30) é uma matriz de permutação.*/
    int i, j, n, M[MAX][MAX], cont=0, cont2=0;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin>>M[i][j];
            if(M[i][j]==1 || M[i][j]!=0){
                cont++;
            }
            if(cont>=2){
                cont2++;
            }
            if(j==n && cont==0){
                cont2++;
            }
        }
        cont=0;
    }
    if(cont2==0){
        cout<<"E matriz de permutacao"<<endl;
    }else{
        cout<<"Nao e matriz de permutacao"<<endl;
    }
    return 0;
}

#include <iostream>
#define MAX_L 50
#define MAX_C 50

using namespace std;

bool linhasIguais(int M[MAX_L][MAX_C], int m, int n);

int main()
{
    /*Linhas iguaisEscreva uma função que recebe uma matriz M,
    o seu número de linhas e colunas, e retorna true se M possui duas linhas iguais e false caso contrário*/
    int M[MAX_L][MAX_C], i, j, m, n;
    cin>> m >> n;
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            cin>>M[i][j];
        }
    }
    if(linhasIguais(M, m, n)==true){
        cout<<"A matriz tem linhas repetidas"<<endl;
    }else{
        cout<<"A matriz nao tem linhas repetidas"<<endl;
    }
    return 0;
}

bool linhasIguais(int M[MAX_L][MAX_C], int m, int n){
    int cont=0, contAux=0, i, j, k;
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
          if(M[i][j]=M[i++][j]){
            cont++;
          }
          if(cont==n){
            return true;
          }
        }
        cont=0;
    }
    return false;
}

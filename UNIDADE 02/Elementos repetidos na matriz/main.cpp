#include <iostream>
#define MAX_L 30
#define MAX_C 30

using namespace std;

int main()
{
    /*Faça um programa que, dados os números n, m (n,m <= 30),
     lê do usuário os valores de uma matriz A de inteiros de dimensão n x m.
     O seu programa deve imprimir uma mensagem indicando se a matriz possui ou não elementos repetidos.*/
     int n, m, i, j, k, M[MAX_L][MAX_C], cont=0, cont2=1, aux;
     cin>> n >> m;
     for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cin>>M[i][j];
        }
     }
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                if(i==1 && j==1){
                aux=M[i][j];
                }
                cout<<"aux: "<<aux<<endl;
                if(aux==M[i][j]){
                    cont++;
                }
                if(j==m && cont2<=m){
                    cont2++;
                    j=cont2;
                    aux=M[i][j];
                    j=1;
                    cont=0;
                }
            }
            cont2=1;
        }
     if(cont<=1){
        cout<<"Matriz nao possui elementos repetidos"<<endl;
     }else{
        cout<<"Matriz possui valores repetidos"<<endl;
     }


    return 0;
}

#include <iostream>
#define MAX 30

using namespace std;

int main()
{
    /*Matriz identidadeFaça um programa que, dado um número n (n <= 30), crie e imprima a matriz identidade de dimensão n.*/
    int i, j, n, matriz[MAX][MAX];
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
          if(i==j){
            matriz[i][j]=1;
            cout<<matriz[i][j]<<" ";
          }
          else{
            matriz[i][j]=0;
            cout<<matriz[i][j]<<" ";
          }
        }
        cout<<endl;
    }
    return 0;
}

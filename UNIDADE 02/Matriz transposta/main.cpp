#include <iostream>
#define MAX_L 30
#define MAX_C 30
using namespace std;

int main()
{
    /*Escreva um programa que recebe o número de linhas l e colunas c​,
    onde l, c​ < 30, de uma matriz A e cria uma matriz B, que é a
    matriz transposta de A. O seu programa deve imprimir a matriz B.*/
    int l, c, A[MAX_L][MAX_C], B[MAX_L][MAX_C], i, j;
    cin>> l >> c;
    for(i=1;i<=l;i++){
        for(j=1;j<=c;j++){
            cin>>A[i][j];
        }
    }
    cout<<"Transposta"<<endl;
    for(j=1;j<=c;j++){
        for(i=1;i<=l;i++){
            B[i][j]=A[i][j];
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

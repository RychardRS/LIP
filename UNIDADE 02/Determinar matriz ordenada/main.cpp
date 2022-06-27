#include <iostream>
#define L 30
#define C 30

using namespace std;

bool ordenada(int m, int n, int matriz[L][C]);

int main()
{
    /*Faça uma função que, dada uma matriz A de dimensão n x m (n,m <=30),
    determine (retornando true/false) se A está ordenada. Por exemplo, a matriz

    11 13 19

A = 22 27 30

    36 44 55
​está ordenada. Faça um bloco main que receba as dimensões da matriz e os valores
da matriz. Depois, utilizando a função anterior, imprima uma mensagem informando se a matriz está ordenada ou não. */
    int i, j, m, n, matriz[L][C];
    cin>>m>>n;
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            cin>> matriz[i][j];
        }
    }
    if(ordenada(m, n, matriz)==true){
        cout<<"Esta ordenada"<<endl;
    }else{
        cout<<"Nao esta ordenada"<<endl;
    }
    return 0;
}

bool ordenada(int m, int n, int matriz[L][C]){
    int i, j, menorNumero, cont=0;
    bool ordem=true;
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            if(i==1 && j==1){
            menorNumero=matriz[i][j];
            }
            if(menorNumero<matriz[i][j]){
                menorNumero=matriz[i][j];
            }else{
                cont++;
            }
            if(cont>=2){
                ordem=false;
                return ordem;
            }
        }
    }
    return ordem;
}

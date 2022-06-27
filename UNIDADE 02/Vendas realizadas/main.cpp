#include <iostream>
#define MAX 30
using namespace std;

int main()
{
    /*O chefe do setor de vendas de uma loja deseja saber se
    ocorreu uma venda de um derminado valor. Escreva um programa
    que lê um inteiro n (n <= 30), indicando a quantidade de vendas
     realizadas, e em seguida lê o valor de cada venda. A seguir, o
     seu programa deve ler um valor x e imprimir se ocorreu alguma venda cujo valor foi x.*/

     int n, v[MAX], i, valor, cont=0;
     cin>>n;
     for(i=0;i<n;i++){
        cin>>v[i];
     }
     cin>>valor;
     for(i=0;i<n;i++){
        if(valor==v[i]){
            cout<<"Vendeu "<<valor;
            cont++;
        }
     }
     if(cont==0){
        cout<<"Nao vendeu "<<valor<<endl;
     }
    return 0;
}

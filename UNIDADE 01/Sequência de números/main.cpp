#include <iostream>

using namespace std;

int main()
{
    /*Sequencia de NúmerosImplemente um programa que lê do usuário
    uma sequência de números inteiros enquanto o valor 0 não é digitado.
    Quando esse valor for digitado, o programa deve imprimir o menor valor dentre todos inseridos.*/

    int sequencia, menorNumero, aux;
    cin>>sequencia;
    menorNumero=sequencia;
    while(sequencia!=0){
        if(sequencia<menorNumero){
            aux=sequencia;
            menorNumero=aux;
        }
        cin>>sequencia;
    }
    cout<<menorNumero<<endl;
    return 0;
}

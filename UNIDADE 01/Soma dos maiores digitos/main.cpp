#include <iostream>

using namespace std;

int main()
{
    /*Escreva um programa que lê um valor inteiro positivo N
e em seguida lê uma sequência de N números inteiros não negativos.
O programa deve imprimir o número cuja soma dos seus
dígitos é a maior da sequência. Se a soma dos dígitos de dois números for igual,
imprima o número que aparece primeiro na sequência.*/
    int numeroSequencia, numero, soma=0, i, maiorSoma=1, divisao, auxSoma, copiaSequencia, maiorSequencia=0;
     cin>>numero;
     for(i=0;i<numero;i++){
    cin>>numeroSequencia;
    copiaSequencia=numeroSequencia;
     while(numeroSequencia>0){
        divisao=numeroSequencia%10;
        soma=soma+divisao;
        numeroSequencia=numeroSequencia/10;
     }
     if(soma>maiorSoma){
        auxSoma=soma;
        maiorSoma=auxSoma;
        maiorSequencia=copiaSequencia;
     }

     divisao=0;
     auxSoma=0;
     soma=0;
     }
     cout<<maiorSequencia<<endl;
    return 0;
}

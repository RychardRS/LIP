#include <iostream>

using namespace std;

int passos(int n, int cont);

int main()
{
    /*Considere as seguintes operações em um inteiro positivo n: -
    se n for par, divida-o por 2 - se n for ímpar, multiplique-o por 3 e
    some 1A conjectura de Collatz diz que, para qualquer número n>0,
    quando as regras acima são aplicadas, eventualmente sempre chegaremos
    a 1. Faça uma função recursiva que, dado um número n>0, retorne o número de passos para chegar a 1*/
    int n, cont=0, aux;
    cin>>n;
    aux=passos(n, cont);
    cout<<"Numero de passos: "<<aux;
    return 0;
}

int passos(int n, int cont){
    cout<<n<<endl;
    if(n==1){
        return cont;
    }else{
        if(n%2==0){
            cont++;
            return passos(n/2, cont);
        }
        if(n%2!=0){
            cont++;
            return passos(n*3+1, cont);
        }
    }
}

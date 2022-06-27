#include <iostream>

using namespace std;

int main()
{
    /*PrimoImplemente um programa que lê um número inteiro positivo e informa se esse número é primo ou não*/

    int cont=1, numero, cont2=0, divisoes, divisor=1, x;
    cin>>numero;
    while(cont<=numero){
        x=numero%cont;
        if(x==0){
            cont2++;
        }
        cont++;
    }
        if(cont2==2){
            cout<<"O numero "<<numero<<" eh primo"<<endl;

        }else{
            cout<<"O numero "<<numero<<" nao eh primo"<<endl;
        }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    /*Escreva um programa lê um número inteiro e imprime a mensagem Menor que 10
    caso esse número seja menor do que dez, e imprime o quadrado desse número caso contrário.*/

    int x;
    cin>>x;
    if(x<10){
        cout<<"Menor que 10"<<endl;
    }else{
        cout<<x*x<<endl;
    }
    return 0;
}

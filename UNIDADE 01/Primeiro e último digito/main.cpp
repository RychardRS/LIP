#include <iostream>

using namespace std;

int digitos(int n, int &primeiroDigito, int &ultimoDigito);

int main()
{
    /*Primeiro e último dígito Faça uma função que recebe como
    parâmetro um número inteiro n>0 e retorna o primeiro e o último dígito de n.*/
    int n, primeiroDigito, ultimoDigito;
    cin>>n;
    digitos(n, primeiroDigito, ultimoDigito);
    cout<<"primeiro="<<primeiroDigito<<" ultimo="<<ultimoDigito<<endl;
    return 0;
}

int digitos(int n, int &primeiroDigito, int &ultimoDigito){
    int imprimirDigitos, cont=0;
        if(n==0){
            ultimoDigito=n;
            primeiroDigito=n;
        }
        while(n>0){
        imprimirDigitos=n%10;
        if(cont==0){
            ultimoDigito=imprimirDigitos;
            cont++;
        }
        if(n<10){
            primeiroDigito=n;
        }
        n=n/10;
        }
        return primeiroDigito, ultimoDigito;

}

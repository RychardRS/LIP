#include <iostream>

using namespace std;

int numeroAbundante(int n);

int main()
{
    /*Implemente um programa que receba como entrada um número inteiro
positivo x. O programa deve imprimir uma mensagem informando se x é um número abundate ou não.
Um número é abundante se a soma de todos os seus divisores próprios é maior do que ele.
Por exemplo, se x for igual a 12, x é um número
abundante, já que 1+2+3+4+6>121+2+3+4+6 > 121+2+3+4+6>12 (observe que 12 é divisor mas não é um divisor próprio).*/
    int n;
    cin>>n;
    if(numeroAbundante(n)==true){
        cout<<n<<" e um numero abundante"<<endl;
    }else{
        cout<<n<<" nao e um numero abundante"<<endl;
    }
    return 0;
}

int numeroAbundante(int n){
    int i, soma=0;
    for(i=1;i<=n/2;i++){
        if(n%i==0){
            soma=soma+i;
        }
    }
    if(soma>n){
        return true;
    }else{
        return false;
    }
}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /*Escreva um programa que lê três valores inteiros, que correspodem,
    respectivamente, aos coeficientes a, b e c, de uma equação do segundo grau a∗x2+b∗x+ca*x^2 + b*x + ca∗x
2
 +b∗x+c. O seu programa deve calcular e mostrar as raízes dessa equação, de acordo com os seguintes critérios:

Imprima a mensagem Sem raiz real, caso não existam raízes reais.
Se a equação possui uma única raiz, imprima ela somente uma vez.
Se a equação possui duas raízes, imprima primero a raiz de menor valor.*/
    int a, b, c;
    float delta, raizUm, raizDois, x;
    cin>>a>>b>>c;
    delta=pow(b, 2)-(4*a*c);
    if(delta<0){
        cout<<"Sem raiz real"<<endl;
    }else if(delta==0){
        x=2*a;
        raizUm=(-b+sqrt(delta))/x;
        cout<<raizUm<<endl;
    }else{
        x=2*a;
        raizUm=(-b+sqrt(delta))/x;
        raizDois=(-b-sqrt(delta))/x;
        if(raizUm>raizDois){
            cout<<raizDois<<" "<<raizUm<<endl;
        }else{
            cout<<raizUm<<" "<<raizDois<<endl;
        }
    }
    return 0;
}

#include <iostream>

using namespace std;

int inverte(int &x, int &aux, int &aux2, int &copia);

int main()
{
    /*Inverte XEscreva uma função que recebe como parâmetro um
    número inteiro x. A função deve utilizar um parâmetro por
    referência para informar o valor de x invertido (por exemplo, 123 -> 321).
    A função também deve retornar: * -1 se o número x é menor que o número x invertido ;
    * 0 se x e o número invertido são iguais; * 1 caso contrario.
    Seu programa deve imprimir o valor de x, x invertido e uma frase informando
    se x é maior, menor ou igual ao seu valor invertido.*/

    int x, aux, aux2, copia;
    cin>>x;
    inverte(x, aux, aux2, copia);
    cout<<"X="<<copia<<endl<<"X invertido="<<aux<<endl;
    if(aux2==-1){
        cout<<"X e menor que X invertio";
    }
    if(aux2==0){
        cout<<"X e igual a X invertido";
    }
    if(aux2==1){
        cout<<"X e maior que X invertido";
    }

    return 0;
}

int inverte(int &x, int &aux, int &aux2, int &copia){
    int div;
    aux=0;
    copia=x;
    while(x>0){
    div=x%10;
    aux=aux*10+div;
    x=x/10;
    }
    if(copia<aux){
        aux2=-1;
    }
    if(copia==aux){
        aux2=0;
    }
    if(copia>aux){
        aux2=1;
    }
    return aux, aux2;
}

#include <iostream>

using namespace std;

int soma(int x, int y);

int main()
{
    /*Somando o intervaloImplemente uma função que recebe dois valores inteiros,
    x e y , e retorna a soma dos números no intervalo [x, y].*/
    int x, y;
    cin>>x >> y;
    cout<<soma(x, y)<<endl;
    return 0;
}

int soma(int x, int y){
    int i, somatorio=0;
    for(i=x;i<=y;i++){
        somatorio=somatorio+i;
    }
    return somatorio;
}

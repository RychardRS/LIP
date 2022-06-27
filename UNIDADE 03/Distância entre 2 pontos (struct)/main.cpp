#include <iostream>
#include <cmath>

using namespace std;

struct Ponto{
    int x, y;
};

int distancia(Ponto p1, Ponto p2);

int main()
{
    /*Escreva um programa para calcular a distância entre dois pontos no plano
catersiano. O seu programa deve ter uma estrutura Ponto, com campos
x e y, e uma função que recebe dois pontos e retorna o quadrado da distância
entre eles.*/

    Ponto p1, p2;
    cin>>p1.x>>p1.y;
    cin>>p2.x>>p2.y;
    cout<<distancia(p1, p2)<<endl;

    return 0;
}

int distancia(Ponto p1, Ponto p2){
    int calculo;
    calculo=pow(p1.x-p2.x, 2)+pow(p1.y-p2.y, 2);
    return calculo;
}

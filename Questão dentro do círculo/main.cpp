#include <iostream>
#include <cmath>
using namespace std;

int coordenadas(int xP1, int yP1, int xP2, int yP2);

int main()
{
    int xp1, yp1, xp2, yp2;
    cin>>xp1 >> yp1 >> xp2 >> yp2;
    cout<<coordenadas(xp1, yp1, xp2, yp2)<<endl;
    /*Dentro do círculoImplemente uma função que recebe 4 parâmetros,
    sendo eles as coordenadas x e y de dois pontos P1 e P2 e retorna
    a distância entre esses pontos.Utilizando a função anterior, implemente
    uma função que recebe como parâmetros o raio de um círculo, as coordenadas
    do seu centro, e as coordenadas de um ponto P. Essa função deve determinar
        se P encontra-se ou não dentro do círculo retornando verdadeiro (true)
        ou falso (false). Escreva um programa que leia o raio, as coordenadas
        do centro do círculo e as coordenadas de um ponto. O programa deve imprimir
        na tela se o ponto está dentro ou fora do círculo.*/
    return 0;
}

int coordenadas(int xP1, int yP1, int xP2, int yP2){
    float distancia;
    distancia=sqrt((xP2-xP1)*(xP2-xP1)+(yP2-yP1)*(yP2-yP1));
    return distancia;
}

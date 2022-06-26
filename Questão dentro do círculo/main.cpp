#include <iostream>
#include <cmath>
using namespace std;

int coordenadas(int xP1, int yP1, int xP2, int yP2);

int main()
{
    int xp1, yp1, xp2, yp2;
    cin>>xp1 >> yp1 >> xp2 >> yp2;
    cout<<coordenadas(xp1, yp1, xp2, yp2)<<endl;
    /*Dentro do c�rculoImplemente uma fun��o que recebe 4 par�metros,
    sendo eles as coordenadas x e y de dois pontos P1 e P2 e retorna
    a dist�ncia entre esses pontos.Utilizando a fun��o anterior, implemente
    uma fun��o que recebe como par�metros o raio de um c�rculo, as coordenadas
    do seu centro, e as coordenadas de um ponto P. Essa fun��o deve determinar
        se P encontra-se ou n�o dentro do c�rculo retornando verdadeiro (true)
        ou falso (false). Escreva um programa que leia o raio, as coordenadas
        do centro do c�rculo e as coordenadas de um ponto. O programa deve imprimir
        na tela se o ponto est� dentro ou fora do c�rculo.*/
    return 0;
}

int coordenadas(int xP1, int yP1, int xP2, int yP2){
    float distancia;
    distancia=sqrt((xP2-xP1)*(xP2-xP1)+(yP2-yP1)*(yP2-yP1));
    return distancia;
}

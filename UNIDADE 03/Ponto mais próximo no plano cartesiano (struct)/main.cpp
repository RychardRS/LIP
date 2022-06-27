#include <iostream>
#include <cmath>

using namespace std;

struct Ponto{
    int x, y;
};

float ponto(Ponto p, Ponto y);

int main()
{
    /*Escreva um programa que lê as coordenadas no plano cartesiano de um ponto
p e em seguida lê um inteiro n e as coordenadas de n pontos. Seu programa deve
dizer qual dos n pontos é o ponto mais próximo de p. O seu programa deve ter
uma estrutura Ponto, com campos x e y, e uma função que recebe dois pontos e
retorna a distância entre eles.*/
    Ponto p, y, aux;
    int n, i;
    float resultado, menorDistancia;
    cin>>p.x>>p.y;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>y.x>>y.y;
        resultado=ponto(p, y);
        if(i==0){
            menorDistancia=resultado;
            aux.x=y.x;
            aux.y=y.y;
        }else if(menorDistancia>resultado){
            menorDistancia=resultado;
            aux.x=y.x;
            aux.y=y.y;
        }
    }
    cout<<"Ponto mais perto e ("<<aux.x<<", "<<aux.y<<")"<<endl;

    return 0;
}

float ponto(Ponto p, Ponto y){
    float distancia;
    distancia=sqrt(pow(p.x-y.x, 2)+pow(p.y-y.y, 2));
    return distancia;
}

#include <iostream>
#include <math.h>

using namespace std;

int potencia(int x, int y);

int main()
{
    /*Potencia Defina recursivamente a função potência. Assuma que os parâmetros x e y são inteiros positivos.*/
    int x, y, P;
    cin>>x>>y;
    P=potencia(x,y);
    cout<<"pow( "<<x<<" , "<<y<<" )"<<" = "<<P<<endl;
    return 0;
}

int potencia(int x, int y){
    int aux;
    while(x>=0 && y>=0){
        if(y==0){
            return 1;
        }else{
            aux=x*potencia(x,y-1);
            return aux;
        }
    }
}

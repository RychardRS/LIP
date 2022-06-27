#include <iostream>

using namespace std;

int multiplicacao(int x, int y);

int main()
{
    /*MultiplicaçãoDefina recursivamente uma função para multiplicar dois inteiros positivos x e y.*/
    int x, y, multi;
    cin>>x>>y;
    multi=multiplicacao(x, y);
    cout<<x<<" * "<<y<<" = "<<multi<<endl;
    return 0;
}

int multiplicacao(int x, int y){
    if(y==1){
        return x;
    }else if(y==0){
        return 0;
    }else{
        return x+multiplicacao(x, y-1);
    }
}

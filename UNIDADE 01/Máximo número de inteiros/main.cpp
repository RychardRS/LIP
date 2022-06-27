#include <iostream>

using namespace std;

int maximo(int n1, int n2, int n3);

int main()
{
    int n1, n2, n3;
    cin>>n1 >> n2 >> n3;
    cout<<maximo(n1, n2, n3)<<endl;
    /*Escreva uma função maximo que recebe três valores inteiros e retorna o maior valor
dos três. Você pode assumir que o usuário irá fornecer números distintos.*/

    return 0;
}

int maximo(int n1, int n2, int n3){
    if(n1>n2 && n1>n3){
        return n1;
    }
    if(n2>n1 && n2>n3){
        return n2;
    }
    if(n3>n1 && n3>n2){
        return n3;
    }
}

#include <iostream>

using namespace std;

int troca(int &a, int &b);

int main()
{
    int a, b, aux;
    cin>>a >> b;
    troca(a, b);
    cout<<a<<" "<<b<<endl;
    return 0;
}

int troca(int &a, int &b){
    int aux;
    aux=b;
    b=a;
    a=aux;
}

#include <iostream>

using namespace std;

int main()
{
    /*Fatores PrimosTodo número natural n>1 pode ser decomposto
    em um produto de dois ou mais fatores. A fatoração de um número
    natural é a sua decomposição em um produto de fatores primos.
    Por exemplo, 32 = (2)^524 = (2)^3 x 345 = (3)^2 x 51400 = (2)^3 x (5)^2 x 7
    Queremos calcular o maior fator primo de um número n>1. Por exemplo, o maior fator primo de 1400 é 7 e de 45 é 5.*/
    int n, i, cont=0, cont2=1, maiorPrimo=1, aux=0;
    cin>>n;
    while(cont2<=n){
    for(i=1;i<=cont2;i++){
            if(cont2%i==0){
                cont++;
            }
        }
        if(cont==2){
            if(n%cont2==0){
            n=n/cont2;
            aux=cont2;
            maiorPrimo=aux;
        }
        }
        cont=0;
        cont2++;
    }
    cout<<maiorPrimo<<endl;

    return 0;
}

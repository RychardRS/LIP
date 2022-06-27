#include <iostream>

using namespace std;

int main()
{
    /*DigitosImplemente um programa que lê um número inteiro n
     (pode ser positivo ou negativo) e imprime a quantidade de dígitos desse número.*/
     int numero, digitos=1, x;
     cin>>numero;
     if(numero>-10 && numero<10){
        cout<<digitos<<endl;
     }else{
     while(numero>=10 || numero<=-10){
        numero=numero/10;
        digitos++;
     }
     cout<<digitos<<endl;
     }
    return 0;
}

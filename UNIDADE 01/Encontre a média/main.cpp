#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    /*Encontre a médiaImplemente um programa que lê um número n do usuário
     e em seguida, lê n números inteiros. O programadeve exibir a média dos
      valores digitados. Imprima o resultado com 2 casas decimais.*/

      int n, cont=0, numeros;
      float media, soma=0;
      cin>>n;
      while(cont<n){
        cin>>numeros;
        soma=soma+numeros;
        cont++;
      }
      media=soma/n;
      cout<<fixed<<setprecision(2);
      cout<<media<<endl;

    return 0;
}

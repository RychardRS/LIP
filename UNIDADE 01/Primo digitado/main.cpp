#include <iostream>

using namespace std;

int main()
{
    /*Primo DigitadoImplemente um programa que recebe números inteiros
     positivos do usuário enquanto o usuário digita valores diferentes
      de zero. Ao final do seu programa, imprima a mensagem "Número primo digitado"
      se o usuário digitou algum número primo. Caso contrário, imprima a mensagem "Número primo não digitado".*/
      int n, cont2=0, i, cont=0;
      cin>>n;
      while(n!=0){
        for(i=1;i<=n;i++){
            if(n%i==0){
                cont++;
            }
        }
        if(cont==2){
            cont2++;
        }
        cont=0;
        cin>>n;
      }
      if(cont2>0){
        cout<<"Numero primo digitado"<<endl;
      }else{
        cout<<"Numero primo nao digitado"<<endl;
      }

    return 0;
}

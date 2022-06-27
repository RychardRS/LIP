#include <iostream>

using namespace std;

int main()
{
   /*Escreva um programa que lê três números inteiros distintos e
   imprime o valor do número que não é nem o maior nem o menor.*/

   int n1, n2, n3;
   cout<<"Digite o primeiro numero: "<<endl;
   cin>>n1;
   cout<<"Digite o segundo numero: "<<endl;
   cin>>n2;
   cout<<"Digite o terceiro numero: "<<endl;
   cin>>n3;
   if(n1!=n2 && n2!=n3 && n3!=n1){
        if(n1>n2 && n1>n3){
        if(n2<n3){
            cout<<n3<<endl;
        }else{
            cout<<n2<<endl;
        }

   }
           if(n2>n1 && n2>n3){
        if(n1<n3){
            cout<<n3<<endl;
        }else{
            cout<<n1<<endl;
        }

   }
           if(n3>n2 && n3>n1){
                if(n1<n2){
                    cout<<n2<<endl;
                }else{
                    cout<<n1<<endl;
                }

   }
   }

    return 0;

}

#include <iostream>
#define MAX 100

using namespace std;

int main()
{
    /*Elemento repetidoLeia uma sequência de n (n <= 20) números e informe se existe algum elemento repetido na sequência.*/
    int a[MAX], n, i, auxiliar, cont=0, cont2=0, copia, cont3=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        copia=i;
        auxiliar=a[i];
        while(cont<n){
            if(auxiliar==a[i]){
                cont2++;
            }
        i++;
        cont++;
        }
         if(cont2>=2){
                cont3++;
        }
        cont=0;
        cont2=0;
        i=copia;
    }
        if(cont3>=1){
            cout<<"Existem elementos repetidos"<<endl;
        }else{
            cout<<"Nao existem elementos repetidos"<<endl;
        }
    return 0;
}

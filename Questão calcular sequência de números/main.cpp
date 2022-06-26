#include <iostream>
#define MAX 100
using namespace std;

int main()
{
    /*Dadas duas seqüências com n (n <= 100) números inteiros entre 0 e 9,
interpretadas como dois números inteiros de n algarismos, calcular a seqüência
de números que representa a soma dos dois inteiros. Por exemplo, para n=3:
 [ 2 6 7 ]

+[ 5 6 7 ]

=[ 8 3 4 ]

Você pode assumir que o resultado será um número de n algarismos.
*/
    int n, soma=0, soma2=0, V1[MAX], V2[MAX], V3[MAX] , i, aux=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>V1[i];
        soma=soma+V1[i];
    }

    for(i=0;i<n;i++){
        cin>>V2[i];
        soma2=soma2+V2[i];
    }

    for(i=0;i<n;i++){
        V3[i]=V1[i]+V2[i];
    }

    for(i=n-1;i>=0;i--){
        if(V3[i]>=10){
            aux=V3[i]/10;
            V3[i]=V3[i]%10;

        }
        if(aux!=0){
            V3[i-1]=V3[i-1]+aux;

        }
        aux=0;
    }
    cout<<" [";
    for(i=0;i<n;i++){
        cout<<" "<<V1[i];
    }
    cout<<" ]";
    cout<<endl;
    cout<<"+[";
    for(i=0;i<n;i++){
        cout<<" "<<V2[i];
    }
    cout<<" ]";
    cout<<endl;
    cout<<"=[";
    for(i=0;i<n;i++){
        cout<<" "<<V3[i];
    }
    cout<<" ]";
    return 0;
}

#include <iostream>
#define MAX 100

using namespace std;

int main()
{
    /*Ordem-inversaLeia n (n <= 30) números e imprima-os na ordem inversa.*/

    int n[MAX], i, inverte[MAX], j, num;
    cin>>num;
    for(i=0;i<num;i++){
        cin>>n[i];
    }
    for(j=0;j<num;j++){
        i--;
        inverte[j]=n[i];
    }
    for(j=0;j<num;j++){
        cout<<inverte[j]<<endl;
    }

    return 0;
}

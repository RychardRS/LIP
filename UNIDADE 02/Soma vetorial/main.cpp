#include <iostream>
#define MAX 50
using namespace std;

int main()
{
    /*Soma vetorialDados dois vetores com n (n <= 50) componentes cada um, calcular e imprimir a soma (vetorial) deles.*/
    int n, v[MAX], v2[MAX], v3[MAX], i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    for(i=0;i<n;i++){
        cin>>v2[i];
    }
    for(i=0;i<n;i++){
        v3[i]=v[i]+v2[i];
    }
    cout<<"[ ";
    for(i=0;i<n;i++){
        if(i==0){
        cout<<v3[i];
        }else{
            cout<<" , "<<v3[i];
        }
    }
    cout<<" ]";
    return 0;
}

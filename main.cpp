#include <iostream>
#define MAX 100
using namespace std;

int main()
{
    /*Acima da médiaEscreva um programa que lê n (n <= 100) números reais e
    imprime quantos desses números são maiores do que a média deles.*/

    int n, i, cont=0;
    float v[MAX], soma=0, media;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>v[i];
        soma=soma+v[i];
    }
    media=soma/n;
    cout<<"Media: "<<media<<endl;
    for(i=0;i<n;i++){
        if(v[i]>media){
            cont++;
        }
    }
    cout<<"Valores acima da media: "<<cont<<endl;
    return 0;
}

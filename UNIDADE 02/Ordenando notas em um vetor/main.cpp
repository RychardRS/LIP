#include <iostream>
#define MAX 100

using namespace std;

float ordenar(float k, int n, double v[MAX]);

int main()
{
    /*Ordenando NotasVocê é o professor de uma turma de LiP e
    gostaria de saber a média das k maiores notas da turma.
    Escreva uma função que recebe um array com as notas dos alunos da
    turma, o número de alunos e o valor de k, e retorna a média das k
    maiores notas da turma. Seu programa deve ler o valor de k, n
    e depois as n notas. Utilize o tipo double e imprima seus resultados com 2 casas decimais.*/
    int i, n;
    float k;
    double v[MAX];
    cin>>k >> n;
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    cout.precision(2);
    std::cout<< std::fixed;
    cout<<"[ ";
    for(i=0;i<n;i++){
        if(i<n-1){
            cout<<v[i]<<" , ";
        }else{
            cout<<v[i];
        }
    }
    cout<<" ]";
    cout<<endl;
    cout<<"Media = "<<ordenar(k, n, v);
    return 0;
}

float ordenar(float k, int n, double v[MAX]){
    float media, soma=0;
    int i, j, ultimo=n-1;
    float aux;
    for(i=0;i<ultimo;i++){
        for(j=0;j<ultimo;j++){
            if(v[j]<v[j+1]){
                aux=v[j+1];
                v[j+1]=v[j];
                v[j]=aux;
            }
    }
    }

    for(i=0;i<k;i++){
        soma=soma+v[i];
    }
    media=soma/k;
    return media;
}

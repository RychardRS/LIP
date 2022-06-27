#include <iostream>
#define MAX 50
using namespace std;

struct VetorNumeros{
    float v1[MAX], v2[MAX], produto, soma;
    int n;
};

float produtoEscalar(VetorNumeros v1[MAX], VetorNumeros v2[MAX], int quantidade);

int main()
{
    /*Defina um tipo estruturado para representar um vetor de números
    reais com n elementos. Tanto os elementos, quanto a quantidade destes
    serão os campos da estrutura. A partir da estrutura definida,
    implemente uma função que calcula e retorna o produto escalar entre
     dois vetores dados como argumento. Teste a função criada considerando
      ler a partir do teclado dois vetores u e v. O produto escalar entre u e v é dado por:
​	 */
    VetorNumeros vetor[MAX], vetor2[MAX], qntd, qntd2;
    int i, quantidade;
    cin>>qntd.n;
    for(i=0;i<qntd.n;i++){
        cin>>vetor[i].v1[i];
    }
    cin>>qntd2.n;
    for(i=0;i<qntd2.n;i++){
        cin>>vetor2[i].v2[i];
    }
    quantidade=qntd.n;
    std::cout.precision(2);
    std::cout<<std::fixed;
    cout<<"Prod. Escalar = "<<produtoEscalar(vetor, vetor2, quantidade);
    return 0;
}

float produtoEscalar(VetorNumeros v1[MAX], VetorNumeros v2[MAX], int quantidade){
    int i;
    float resultado;
    VetorNumeros prod, soma;
    for(i=0;i<quantidade;i++){
        prod.produto=v1[i].v1[i]*v2[i].v2[i];
        soma.soma=soma.soma+prod.produto;
    }

    resultado=soma.soma;
    return resultado;
}

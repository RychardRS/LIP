#include <iostream>

using namespace std;

struct Resultado{
    float media, n1, n2, n3;
};

float notas(Resultado n1, Resultado n2, Resultado n3);

int main()
{
    /*Crie um tipo estruturado para armazenar o resultado semestral de um aluno.
    Este resultado é representado por sua média (número real) e sua situação (texto):
    "Em Recuperação", "Aprovado" ou "Reprovado". Usando o tipo estruturado definido,
    implemente uma função que recebe como argumentos as notas das três unidades de uma
    disciplina cursada pelo aluno e, por referência, guarde o resultado na estrutura. Considere que:

"Em recuperação" está aquele aluno cuja média é maior ou igual a 3 e menor que 5;
"Aprovado" é o aluno cuja média é maior ou igual a 5.
"Reprovado" é o aluno cuja média é menor que 3.
Escreva a função main de modo a testar o que foi pedido.*/
    Resultado n1, n2, n3;
    cin>>n1.n1>>n2.n2>>n3.n3;
    std::cout.precision(2);
    std::cout<<std::fixed;
    if(notas(n1, n2, n3)<3.00){
        cout<<"Aluno "<<"\"Reprovado"<<"\", "<<" Media = "<<notas(n1, n2, n3)<<endl;
    }else if(notas(n1, n2, n3)>=3.00 && notas(n1, n2, n3)<5.00){
        cout<<"Aluno "<<"\"Em recuperacao"<<"\", "<<" Media = "<<notas(n1, n2, n3)<<endl;
    }else{
        cout<<"Aluno "<<"\"Aprovado"<<"\", "<<" Media = "<<notas(n1, n2, n3)<<endl;
    }

    return 0;
}

float notas(Resultado n1, Resultado n2, Resultado n3){
    Resultado media;
    media.media=(n1.n1+n2.n2+n3.n3)/3;
    return media.media;
}

#include <iostream>

using namespace std;

int main()
{
    /*NotasImplemente um programa que lê três notas de um aluno em uma disciplina
    e imprime a situação do aluno conforme as regras da UFRN, ou seja:- Aprovado: média das notas é maior ou igual
    a 5 e o aluno não tirou nenhuma nota abaixo de 3- Final: caso o aluno
    não tenha sido aprovado e ele possua média maior ou igual a 3- Reprovado: caso a média do aluno seja menor do que 3*/

    float n1, n2, n3, media;

    cin>>n1>>n2>>n3;
    media=(n1+n2+n3)/3;
    if(media>=7){
        cout<<"Aprovado"<<endl;
    }
    if(media<3){
        cout<<"Reprovado"<<endl;
    } else if(media>=3 && media<5){
        cout<<"Final"<<endl;
    }
    if(media>=5 && n1>3 && n2>3 && n3>3){
        cout<<"Aprovado"<<endl;
    }else{
        if(media>=5 && media<7){
            if(n1<3 || n2<3 || n3<3){
                cout<<"Final"<<endl;
            }
        }
    }
    return 0;
}

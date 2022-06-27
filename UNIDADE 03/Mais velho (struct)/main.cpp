#include <iostream>
#define MAX 100

using namespace std;

struct Data{
    int dia, mes, ano;
};

int maisVelho(Data d1, Data d2);

int main()
{
    /*Crie uma estrutura Data, com campos dia, mes e ano, e escreva um
programa que lê as datas de nascimento de duas pessoas e determina
quem é a mais velha.

Para isso, crie uma função que recebe duas datas, d1 e d2 , e retorna 1
se d1 é a data mais antiga, 0 se as duas datas são iguais, e −1 se d2 é a
data mais antiga.*/
    Data d1, d2;
    cin>>d1.dia>>d1.mes>>d1.ano;
    cin>>d2.dia>>d2.mes>>d2.ano;
    if(maisVelho(d1, d2)==1){
        cout<<"Pessoa 1 e mais velha"<<endl;
    }else if(maisVelho(d1, d2)==0){
        cout<<"Pessoa 1 e pessoa 2 tem a mesma idadade"<<endl;
    }else{
        cout<<"Pessoa 2 e mais velha"<<endl;
    }
    return 0;
}

int maisVelho(Data d1, Data d2){
    int retorno;
    if(d1.dia==d2.dia && d1.mes==d2.mes && d1.ano==d2.ano){
        retorno=0;
        return retorno;
    }else if(d1.ano<d2.ano){
        retorno=1;
        return retorno;
    }
    if(d2.ano<d1.ano){
        retorno=-1;
        return retorno;
    }
    if(d1.ano==d2.ano){
        if(d1.mes<d2.mes){
            retorno=1;
            return retorno;
        }else if(d1.mes==d2.mes){
            if(d1.dia<d2.dia){
                retorno=1;
                return retorno;
            }
        }else{
            retorno=-1;
            return retorno;
        }
    }
}

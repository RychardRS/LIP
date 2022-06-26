#include <iostream>

using namespace std;

int main()
{
    int ano, bissexto;
    cin>>ano;
    if(ano%400==0){
        bissexto=true;
    }else if(ano%4==0 && ano%100!=0){
        bissexto=true;
    }
    else{
        bissexto=false;
    }
        if(bissexto==true){
            cout<<"o ano "<<ano<<" eh bissexto"<<endl;
        }else{
            cout<<"o ano "<<ano<<" nao eh bissexto"<<endl;
        }
    return 0;
}

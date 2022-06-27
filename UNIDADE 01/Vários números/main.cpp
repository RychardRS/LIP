#include <iostream>

using namespace std;


int main()

{

int numeroDigitado, x=1, menorNumero, segundoMenor, cont=0;

while(x=!0){
cin >> numeroDigitado;
if(numeroDigitado==0){
        break;
}
if(cont==0){
    menorNumero=numeroDigitado;
}


if (numeroDigitado<menorNumero){
    segundoMenor= menorNumero;
    menorNumero = numeroDigitado;
} else if (numeroDigitado<segundoMenor){
    segundoMenor = numeroDigitado;
}
cont++;

}
cout<<menorNumero<<endl<<segundoMenor;
}

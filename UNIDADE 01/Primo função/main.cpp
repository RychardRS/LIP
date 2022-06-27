#include <iostream>
using namespace std;

void funcao(int numero, int &primo, int &naoPrimo);

int main() {

    int numero, primo = 0, naoPrimo = 0;

    cin >> numero;

    funcao(numero, primo, naoPrimo);
    cout << primo << " digitos primos" << endl;
    cout << naoPrimo << " digitos nao primos";

    return 0;
}

void funcao(int numero, int &primo, int &naoPrimo){

    bool ehPrimo = false;
    int digito, i=0;

    while(numero > 0){

        digito = int(numero%10);
        numero /= 10;
        if(i==0){
            cout<<numero<<endl;
            i++;
        }

        if(digito == 2){
            primo++;
        }else{

            for(int i = 2; i < digito; i++){

                if(digito % i == 0){
                    ehPrimo = false;
                    break;
                }else{
                    ehPrimo = true;
                }

            }

            if(ehPrimo == true){
                primo++;
            }else{
                naoPrimo++;
            }

            ehPrimo = false;

        }



    }

}

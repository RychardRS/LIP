#include <iostream>
#define MAX 100

using namespace std;

int main()
{
    /*Sem repetiçõesLeia n (n <= 30) números quaisquer e imprima-os sem repetições.*/
    int n, a[MAX], i, j, repete, cont=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"[";
    for(i=0;i<n;i++){
        repete=false;
        for(j=0;j<i;j++){
            if(a[i]==a[j]){
                repete=true;
                break;
            }
        }
        if(repete==false){
            cont++;
            if(cont==1){
            cout<<a[i];
            }else{
                cout<<" , "<<a[i];
            }
        }
        }

    cout<<"]"<<endl;

    return 0;
}

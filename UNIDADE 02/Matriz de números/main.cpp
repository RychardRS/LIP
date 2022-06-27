#include <iostream>
#define MAX 30

using namespace std;

int main()
{
    int i, j, n, m, matriz[MAX][MAX];
    cin>>n>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cout<<matriz[i][j]<<" ";
          }
        }
        cout<<endl;

    return 0;
}

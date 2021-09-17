#include <iostream>
using namespace std;
int main(){
    int n(0), sum(0);
    cin >> n;
    int *pa = new int[n], *paCol = new int[n];
    for(int i = 0; i < n; i++){
        cin >> pa[i];
        paCol[i] = 0;
    }

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if((pa[i] < pa[j]) && (pa[j] < pa[k])){
                    paCol[j] = 1;
                }
            }
            
        }        
    }
    
    for (int i = 0; i < n; i++)
    {
        if(paCol[i] != 0) sum++;
    }

    cout << sum;
    
    delete []pa;
    delete []paCol;
}
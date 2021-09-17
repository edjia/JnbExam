#include <iostream>
using namespace std;
int main(){
    int n(0), m(0), sum(0);
    cin >> n >> m;
    int* da = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> da[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if((da[i] + da[j]) % m == 0){
                sum++;
            }
        }
        
    }
    cout << sum;
    delete []da;    
}
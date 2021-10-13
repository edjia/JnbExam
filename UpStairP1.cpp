#include <iostream>
using namespace std;
int main()
{
    int n(0);
    
    cin >> n;
    int steps[n];

    for (int i = 0; i < n; i++)
    {
        cin >> steps[n];
    }
    int initVal = steps[0];
    int nextVal(0), next2Val(0), currVal(0);
    int sum = steps[0];
    for (int i = 1; i < n - 1; i++)
    {
        
        if(steps[i] >= 0 || steps[i + 1] < steps[i]){
            sum += steps[i];
        }
        else{
            i++;
        }
    }
    
    cout << sum;
}
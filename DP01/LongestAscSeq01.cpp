#include <iostream>
#define DATA_LENGTH 1002

using namespace std;

int main()
{
    int data[DATA_LENGTH], dp[DATA_LENGTH];
    int n(0);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> data[i];
    }
    data[0] = INT_MIN;
    data[n + 1] = INT_MAX;
    dp[0] = 1;
    for (int i = 1; i <= n + 1; i++)
    {
        dp[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (data[i] > data[j])
            {
                dp[i] = (dp[j] + 1) > dp[i] ? dp[j] + 1 : dp[i];                
            }            
        }        
    }
    cout << dp[n + 1] - 2;    
}
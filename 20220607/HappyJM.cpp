#include <iostream>
using namespace std;

int main()
{
    int stCount = 5;
    int maxMoney = 1000;
    cin >> maxMoney >> stCount;

    int stValueWeights[stCount + 1][2] = {};// {{800, 2}, {400, 5}, {300, 5}, {400, 3}, {200, 2}};
    for (int i = 1; i <= stCount; i++)
    {
        cin >> stValueWeights[i][0] >> stValueWeights[i][1];
    }
    
    int dp[stCount + 1][maxMoney + 1] = {};
    for (int i = 1; i <= stCount; i++)
    {
        for (int j = 0; j <= maxMoney; j++)
        {
            if(j < stValueWeights[i][0]){
                dp[i][j] = dp[i - 1][j];
            }
            else{
                dp[i][j] = max(dp[i - 1][j], 
                                dp[i - 1][j - stValueWeights[i][0]] + stValueWeights[i][0] * stValueWeights[i][1]);
            }
        }
        
    }
    cout << dp[stCount][maxMoney];
    
}
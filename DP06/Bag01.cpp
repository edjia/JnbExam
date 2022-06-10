#include <iostream>
using namespace std;

int main()
{
    int stWeights[] = {1, 3, 1};
    int stValues[] = {15, 30, 20};
    int bagMaxWeight = 4;

    int stLength = sizeof(stWeights) / sizeof(stWeights[0]);
    int dp[stLength + 1][bagMaxWeight + 1] = {};
    for (int i = 1; i <= stLength; i++)
    {
        for (int j = 1; j <= bagMaxWeight; j++)
        {
            int currMaxVal = (j - stWeights[i - 1] >= 0) ? (stValues[i - 1] + dp[i - 1][j - stWeights[i - 1]]) : 0;
            dp[i][j] = max(currMaxVal, dp[i - 1][j]);
        }
        
    }
    cout << dp[stLength][bagMaxWeight];
    
}
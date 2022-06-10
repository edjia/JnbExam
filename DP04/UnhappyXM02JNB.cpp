#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;
long long F[1002][1002];
int main()
{
    long long stairsWeight[1002];
    int stairs, stepStairMax, stepMax;
    cin >> stairs >> stepStairMax >> stepMax;
    for (int i = 1; i <= stairs; ++i)
    {
        cin >> stairsWeight[i];
        F[0][i] = LONG_MIN;
    }
    F[0][0] = 0;
    F[0][stairs + 1] = LONG_MIN;
    stairsWeight[stairs + 1] = 0;
    int ans = LONG_MIN;

    for (int i = 1; i <= stepMax; ++i)
    {
        F[i][0] = LONG_MIN;
        for (int j = 1; j <= stairs + 1; ++j)
        {
            long long max = F[i - 1][j - 1] + stairsWeight[j];
            for (int k = j - stepStairMax; k < j; ++k)
            {
                if(k < 0) continue;
                if (F[i - 1][k] + stairsWeight[j] > max)
                {   
                    max = F[i - 1][k] + stairsWeight[j];
                }
            }
            F[i][j] = max;
        }
        if (F[i][stairs + 1] > ans)
        {
            ans = F[i][stairs + 1];
        }
    }
    cout << ans;
}
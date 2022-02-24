#include <iostream>
#define MAX_STAIRS 1002
using namespace std;
long long  F[MAX_STAIRS][MAX_STAIRS];
int main()
{
	int stairs(0), stepStairMax(0), stepMax(0), stairsWeight[MAX_STAIRS];
	
	cin >> stairs >> stepStairMax >> stepMax;
	
	for (int i = 1; i <= stairs; i++)
	{
		cin >> stairsWeight[i];
	}
    stairsWeight[stairs + 1] = 0;
	
	F[0][0] = 0;
    for (int i = 1; i <= stairs + 1; i++)
    {
        F[0][i] = LONG_MIN;
    }
    int maxWeight = LONG_MIN;
    for (int i = 1; i <= stepMax; i++)
    {
        F[i][0] = LONG_MIN;
        for (int j = 1; j <= stairs + 1; j++)
        {
            long long leizhu = F[i - 1][j - 1] + stairsWeight[j];
            for (int k = j - stepStairMax; k < j; k++)
            {
                if(k < 0) continue;
                if(F[i - 1][k] + stairsWeight[j] > leizhu) leizhu = F[i - 1][k] + stairsWeight[j];
            }
            F[i][j] = leizhu;            
        }
        if(F[i][stairs + 1] > maxWeight) maxWeight = F[i][stairs + 1];
        
    }
    cout << maxWeight;

    
    
    
}
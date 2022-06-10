#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int minElementByArr(int arr[], int len)
{
    return *min_element(arr, arr + len);
}
int main()
{
    int faucetCount = 4, stdFetchWaterCount = 0;
    int faucetStatusArr[faucetCount]; 
    int stdFetchWaterArr[10001] = {23, 71, 87, 32, 70, 93, 80, 76};
    // int stdFetchWaterCount = sizeof(stdFetchWaterArr) / sizeof(stdFetchWaterArr[0]);
    int takeSeconds = 0;
    cin >> stdFetchWaterCount >> faucetCount;
    for (int i = 0; i < stdFetchWaterCount; i++)
    {
        cin >> stdFetchWaterArr[i];
    }
    
    for (int i = 0; i < faucetCount; i++)
    {
        faucetStatusArr[i] = stdFetchWaterArr[i];
    }
    int nextStdIndex = faucetCount;
    while(true)
    {
        int minVal = *min_element(faucetStatusArr, faucetStatusArr + faucetCount);
        int maxVal = *max_element(faucetStatusArr, faucetStatusArr + faucetCount);
        if(nextStdIndex >= stdFetchWaterCount){
            takeSeconds += maxVal;
            break;
        }
        takeSeconds += minVal;
        
        for (int i = 0; i < faucetCount; i++)
        {
            faucetStatusArr[i] -= minVal;
            if(faucetStatusArr[i] == 0 && nextStdIndex < stdFetchWaterCount) 
            {
                faucetStatusArr[i] = stdFetchWaterArr[nextStdIndex]; 
                nextStdIndex++;
                // if(currStdIndex == stdFetchWaterCount) break;
            }            
        }
        
        
    }
    cout << takeSeconds;
}
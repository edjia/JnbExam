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
    int faucetCount = 4;
    int faucetStatusArr[faucetCount]; 
    int stdFetchWaterArr[] = {23, 71, 87, 32, 70, 93, 80, 76};
    int stdFetchWaterCount = sizeof(stdFetchWaterArr) / sizeof(stdFetchWaterArr[0]);
    int takeSeconds = 0;
    for (int i = 0; i < faucetCount; i++)
    {
        faucetStatusArr[i] = stdFetchWaterArr[i];
    }
    int currStdIndex = faucetCount;
    while(true)
    {
        int minVal = *min_element(faucetStatusArr, faucetStatusArr + faucetCount);
        int maxVal = *max_element(faucetStatusArr, faucetStatusArr + faucetCount);
        if(currStdIndex == stdFetchWaterCount){
            takeSeconds += maxVal;
            break;
        }
        takeSeconds += minVal;
        
        for (int i = 0; i < faucetCount; i++)
        {
            faucetStatusArr[i] -= minVal;
            if(faucetStatusArr[i] == 0) 
            {
                faucetStatusArr[i] = stdFetchWaterArr[currStdIndex]; 
                currStdIndex++;
                if(currStdIndex == stdFetchWaterCount) break;
            }
        }
        
        
    }
    cout << takeSeconds;
}
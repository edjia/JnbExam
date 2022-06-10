#include <iostream>
using namespace std;

int rightmostMin(string numStr, int begin, bool nonZero = false)
{
    int minVal = '0' + 10;
    int minIndex = -1;
    for (int i = begin; i < numStr.size(); i++)
    {
        if (nonZero && numStr[i] == '0')
            continue;
        if (numStr[i] <= minVal)
        {
            minVal = numStr[i];
            minIndex = i;
        }
    }
    return minIndex;
}

int main()
{
    // freopen("SwappingDigits.in", "r", stdin);
    // freopen("SwappingDigits.out", "w", stdout);
    string inputNumStr = "596";
    // cin >> inputNumStr;
    int minDigit = '0' + 10;
    int minDigitIndex = -1;
    int minNonZero = '0' + 10;
    int minNonZeroIndex = -1;
    int lIndex = -1;

    for (int i = inputNumStr.size() - 1; i >= 0; i--)
    {
        int insBit = inputNumStr[i];

        if (insBit < minDigit)
        {
            minDigit = insBit;
            minDigitIndex = i;
        }
        if (insBit != '0' && insBit < minNonZero)
        {
            minNonZero = insBit;
            minNonZeroIndex = i;
        }

        if ((i > 0 && insBit > minDigit) || (i == 0 && insBit > minNonZero))
        {
            lIndex = i;
        }
        
    }

    if (lIndex != -1)
    {
        int rmm = rightmostMin(inputNumStr, lIndex, lIndex == 0);
        swap(inputNumStr[lIndex], inputNumStr[rmm]);        
    }

    cout << inputNumStr;
}
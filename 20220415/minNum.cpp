#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 4, m = 3;
    string numStr = "1234";

    // cin >> n >> m;
    // cin >> numStr;

    int lastPos = 0;
    int oriM = m;
    int numStrOriLen = numStr.length();
    int numStrCurrLen = numStrOriLen;
    int loopCount = 0;
    if (m == numStrOriLen)
    {
        cout << 0;
        return 1;
    }
    while (m > 0)
    {
        numStrCurrLen = numStrOriLen + m - oriM;
        for (int j = lastPos; j < numStrCurrLen; j++)
        {
            loopCount++;
            if (j == numStrCurrLen - 1)
            {
                numStr.erase(numStrCurrLen - m, m);
                m = 0;
                break;
            }
            if (numStr[j + 1] < numStr[j])
            {
                numStr.erase(j, 1);
                m--;
                lastPos = j - 1;
                break;
            }
        }
    }

    cout << numStr << " " << loopCount;
}
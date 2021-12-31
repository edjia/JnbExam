#include <iostream>
using namespace std;

int main()
{
    int decNum = -13;
    int divisor = -2;
    int quotient = 0, remainder = 0;
    int binArr[200];
    int binCount = 0;
    while (1)
    {
        remainder = decNum % divisor;
        decNum = decNum / divisor;
        if (remainder < 0)
        {
            decNum += 1;
            remainder *= -1;
        }
        binArr[binCount] = remainder;
        binCount++;
        if(decNum == 0) break;
    }
    for (int i = binCount - 1; i >= 0; i--)
    {
        cout << binArr[i];
    }
    
}
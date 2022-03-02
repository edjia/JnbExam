#include <iostream>
using namespace std;

bool numDiffByBit(int num)
{
    int bitSum[10] = {0};
    if (num < 10)
        return false;
    while (true)
    {
        int numBit = num % 10;
        bitSum[numBit]++;
        num /= 10;
        if (num == 0)
            break;
    }
    for (int i = 1; i < 10; i++)
    {
        if (bitSum[i] > 1)
            return true;
    }
    return false;
}

int main()
{
    int num = 0, sum = 0;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (!numDiffByBit(i))
            sum++;
    }
    cout << sum;
}
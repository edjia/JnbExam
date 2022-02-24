#include <iostream>
using namespace std;
int main()
{
    int x = 123;
    int mod = 0;
    int revertNum = 0;
    int reverseNum = x;
    if (x < 0)
        return false;
    if (x == 0)
        return true;
    while (x > 0)
    {
        mod = x % 10;
        revertNum = revertNum * 10 + mod;
        x /= 10;
    }
    cout << revertNum;
    return revertNum == reverseNum;
}
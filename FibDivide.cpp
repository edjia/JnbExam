#include <iostream>
using namespace std;
int main()
{
    int s(0), t(0);
    int dA(0), dB(0), dC(0), dD(0);
    int a = 2 % 3;
    cin >> s >> t;
    cin >> dA >> dB >> dC >> dD;

    long long fib1(1), fib2(1), fibCurr(1);
    
    for (int i = 1; i <= t; i++)
    {
        if (i == 1 || i == 2)
            fibCurr = fib1;
        else
        {
            fibCurr = fib1 + fib2;
            fib1 = fib2;
            fib2 = fibCurr;
        }
        if ((i >= s) && ((fibCurr % dA) && (fibCurr % dB) &&
             (fibCurr % dC) && (fibCurr % dD)))
        {
            cout << i << " ";
        }
    }
}
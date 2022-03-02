#include <iostream>
using namespace std;
#define MAXN 1001

bool isnp[MAXN];
bool isPrime(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int sievePrime(int start, int end)
{
    int sum = 0;
    for (int i = 2; i * i <= end; i++)
    {
        if (isnp[i])
            continue;
        isnp[i] = !isPrime(i);
        if (!isnp[i])
        {
            for (int j = i * i; j <= end; j += i)
            {
                isnp[j] = 1;
            }
        }
    }
    for (int i = start; i <= end; i++)
    {
        if (!isnp[i])
            sum++;
    }

    return sum;
}
int main()
{
    int n1 = 12, n2 = 20;
    cout << sievePrime(n1, n2);
}
#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n + 1); i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n = 0;
    cin >> n;
    for (int i = 2; i <= n / 2; i++)
    {
        if(isPrime(i) && isPrime(n - i)){
            cout << i << " " << n - i;
            return 0;
        }
    }
    
}
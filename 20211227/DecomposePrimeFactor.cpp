#include <iostream>
using namespace std;
int main()
{
    int num = 0;
    cin >> num;

    int divisor = 2;
    for (int i = 2; i <= num / i; i++)
    {
        if (num % i == 0)
        {
            while (num % i == 0)
            {
                num /= i;
                cout << i << " ";
            }
        }
    }
    if (num > 1)
    {
        cout << num;
    }
    
}
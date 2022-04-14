#include <iostream>
using namespace std;
int main()
{
    int zero = 0;
    int n = 15, k = 2;
    // cin >> n >> k;
    long long sum = 1;
    int s = 487666 % 100;
    s = s % 10;
    for (int i = 0; i < n; i++) 
    {
        sum *= (1 + i * k);
        while (sum % 10 == 0) 
        {
            sum = sum / 10;
            zero++;
        }
        sum = sum % 1000000000;    
    }
    cout << zero << endl << sum % 10 << endl;
    return 0;

}
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int sqrtSmaller = (int)sqrt(n) + 1;
    for (int i = 2; i <= sqrtSmaller; i++)
    {
        if(n % i == 0){
            cout << n / i;
        }
    }    
}
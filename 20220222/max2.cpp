#include <iostream>
using namespace std;

int maxCommonDiv(int a, int b)
{
    if (b != 0)
        return maxCommonDiv(b, a % b);
    else
        return a;
}

int main()
{
    int x, y;
    int sum = 0;
    cin >> x >> y;
    for (int i = 1; i * i < x * y; i++)
    {
        if((x * y) % i == 0 && maxCommonDiv(i, (x * y) / i) == x){
            sum++;
        }
    }
    sum *= 2;
    if(x == y)
        sum++;
    cout << sum;
    //only test stash 
}
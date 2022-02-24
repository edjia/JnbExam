#include <iostream>
using namespace std;

long long hanno(int dishNum)
{
    if (dishNum == 1)
    {
        return 1;
    }
    else
    {
        return 2 * hanno(dishNum - 1) + hanno(1);
    }
}
int main()
{
    cout << hanno(60);
}
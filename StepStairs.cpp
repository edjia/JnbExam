#include <iostream>
#include <vector>
#include <string>

using namespace std;
long long steps(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    return steps(n - 1) + steps(n - 2);
}


int main()
{
    int stairs(0);
    cin >> stairs;
    // cout << steps(stairs);
    long long stepsByStair[100];
    stepsByStair[0] = 1;
    stepsByStair[1] = 1;
    stepsByStair[2] = 2;

    for (int i = 3; i < stairs; i++)
    {
        stepsByStair[i] = stepsByStair[i - 1] + stepsByStair[i - 3];
    }

    cout << stepsByStair[stairs - 1];
}

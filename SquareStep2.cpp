#include <iostream>
using namespace std;

int main()
{
    int n(3), m(4);
    int steps[30][30];
    steps[0][0] = 0;
    steps[1][0] = 1;
    steps[0][1] = 1;

    for (int i = 1; i < n; i++)
    {
        steps[i][0] = 1;
        for (int j = 1; j < m; j++)
        {
            steps[0][j] = 1;
            if (i % 2 == 1 && j % 2 == 1)
                steps[i][j] = 0;
            else
                steps[i][j] = steps[i - 1][j] + steps[i][j - 1];
        }
    }

    cout << steps[n - 1][m - 1];
}

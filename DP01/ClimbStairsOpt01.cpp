#include <iostream>
using namespace std;

int main()
{
    const int MAX_STEPS = 2;
    int stairs = 5;
    cin >> stairs;
    int stairWeights[stairs];
    for (int i = 0; i < stairs; i++)
    {
        cin >> stairWeights[i];
    }

    int F[stairs + 1];
    F[0] = 0;

    for (int i = 1; i <= stairs; i++)
    {
        int curV = stairWeights[i - 1];
        int max = F[i - 1] + curV;
        for (int j = i - MAX_STEPS; j < i; j++)
        {
            if (j < 0)
                continue;
            if(F[j] + curV > max){
                max = F[j] + curV;
            }
        }
        F[i] = max;
    }
    cout << F[stairs];
}
#include <iostream>
#include <math.h>
#include <valarray>
using namespace std;
#define DEBUG
int main()
{
    const int MAX_STEPS = 2;

#ifdef DEBUG
    int stairs = 5;
    int stairWeights[stairs] = {3, -1, -3, 2, -1};
#elif
    int stairs = 5;
    cin >> stairs;
    int stairWeights[stairs];
    for (int i = 0; i < stairs; i++)
    {
        cin >> stairWeights[i];
    }
#endif

    int totalWeight = 0;
    int negWeights[MAX_STEPS];
    int negCount = 0;

    for (int i = 0; i < stairs; i++)
    {
        if (stairWeights[i] >= 0 || i == stairs - 1)
        {
            totalWeight += stairWeights[i];
            negCount = 0;
        }
        else
        {
            negWeights[negCount] = stairWeights[i];
            negCount++;
            if (negCount == MAX_STEPS)
            {
                int maxPos = distance(negWeights, max_element(negWeights, negWeights + MAX_STEPS));
                totalWeight += negWeights[maxPos];
                i -= (MAX_STEPS - maxPos - 1);
                negCount = 0;
            }
        }
    }
    cout << totalWeight;
}
#include <iostream>
#include <iterator>
#include <valarray>

using namespace std;
int getMax()
{
}
int main()
{
    int stairs = 8;
    int stairsWeight[] = {3, -1, -3, 2, -2, -2, 2, -1};
    int nextWeight[3];
    int currWeight = 0, nextWeight = 0, maxWeight = 0;
    int totalWeight = 0;
    bool flag = false;
    totalWeight = stairsWeight[0];
    for (int i = 1; i < stairs - 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            nextWeight[j] = stairsWeight[i + j];
            if (nextWeight[j] >= 0)
            {
                totalWeight += nextWeight[j];
                i++;
                
                break;
            }
        }
        if(flag){
            int maxPos = distance(nextWeight, max_element(nextWeight, nextWeight + 3));
            int maxVal = nextWeight[maxPos];
        }
    }
    totalWeight += stairsWeight[stairs - 1];
    cout << totalWeight;
}
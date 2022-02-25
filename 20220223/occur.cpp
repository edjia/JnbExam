#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int nums[] = {0, 2, 3};
    int minZRS = 0;
    for (int i = 0; i < n; i++)
    {
        if(nums[i] <= n){
            nums[nums[i]] = -1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(nums[i] > 0){
            minZRS = i + 1;
        }
    }
    cout << minZRS;
}
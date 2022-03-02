#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int nums[] = {0, 3, 2};
    bool zeroIsExist = false;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
            zeroIsExist = true;
        else
        {
            if(nums[i] < n)
                nums[nums[i] - 1] = nums[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(nums[i] != i + 1){
            cout << i + 1;
            return 0;
        }
    }
    cout << zeroIsExist ? n : 0;
}
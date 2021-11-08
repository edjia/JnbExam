#include <iostream>
#include <algorithm>
using namespace std;

int smallest(int x, int y, int z){
    return min(min(x, y), z);
}

int main()
{
    int total = 27;
    int SF[total];

    SF[0] = 0;
    SF[-1] = SF[-2] = SF[-3] = SF[-4] = SF[-5] = SF[-6] = SF [-7] = INT_MAX;
    for (int i = 1; i <= total; i++)
    {
        int mininum = min(SF[i - 2], SF[i - 5], SF[i - 7]);
        if (mininum < INT_MAX)
        {   
            SF[i] = mininum + 1;                        
        }
        else{
            SF[i] = INT_MAX;
        }
        
    }   
    cout << SF[total];
    
}
#include <iostream>
using namespace std;
int main()
{
    int m(6);
    const int MAX_NUM = 100;
    int arr[MAX_NUM];
    
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 2;
    int sum(0);
    for (int i(4); i <= m; i++)
    {
        sum = 0;
        for (int j(1); j <= i / 2; j++)
        {
            sum += arr[j];
        }
        arr[i] = sum + 1;
        
    }
    cout << arr[m];
}
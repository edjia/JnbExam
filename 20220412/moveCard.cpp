#include <iostream>
using namespace std;

int main()
{
    int heapCount = 4;
    int heapNumArr[100] = {9, 8, 17, 6};
    int sum = 0;
    int moveCount = 0;
    cin >> heapCount;
    
    
    for (int i = 0; i < heapCount; i++)
    {
        cin >> heapNumArr[i];
        sum += heapNumArr[i];
    }
    int avg = sum / heapCount;
    for (int i = 0; i < heapCount; i++)
    {
        heapNumArr[i] -= avg;        
    }
    for (int i = 0; i < heapCount; i++)
    {
        if(heapNumArr[i] == 0) continue;
        heapNumArr[i + 1] += heapNumArr[i];
        moveCount++;
    }
    cout << moveCount;
}
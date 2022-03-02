#include <iostream>
using namespace std;
template<class T>

int length(T& arr)
{
    return sizeof(arr) / sizeof(arr[0]);
}

void selectionSort(int arr[], int size)
{
    int minIndex = 0;
    int minVal = 0;
    
    for (int i = 0; i < size - 1; i++)
    {
        minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;                
            }
        }
        int tmpVal = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = tmpVal;
    }
    return;
}

int main()
{
    
    int unsortedArr[] = {2, 8, 6, 4};
    int arrSize = length(unsortedArr);
    selectionSort(unsortedArr, arrSize);
    for (int i = 0; i < arrSize; i++)
    {
        cout << unsortedArr[i];
    }
    
}
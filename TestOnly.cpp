#include <iostream>
using namespace std;
int main()
{
    const int ARR_MAX = 2050;
    int* paStore = new int[ARR_MAX];
    for (int i = 0; i < ARR_MAX; i++)
    {
        paStore[i] = 0;
    }
    
    int n(0);
    cin >> n;
    int val(0);
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        paStore[val]++;
    }

    int numOccurrrences = paStore[0];
    int numOccMax(0);
    for (int i = 1; i < ARR_MAX; i++)
    {
        if(paStore[i] >= numOccurrrences){
            numOccMax = i;
            numOccurrrences = paStore[i];
        }
    }
    
    cout << numOccMax;
    delete []paStore;
}

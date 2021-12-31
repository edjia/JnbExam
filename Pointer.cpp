#include <iostream>
using namespace std;
int main()
{
    int* pa = new int[10];
    for (int i = 0; i < 10; i++)
    {
        pa[i] = i;
    }
    
    cout << pa[1];
    pa++;
    cout << pa[1];
    delete pa;
}
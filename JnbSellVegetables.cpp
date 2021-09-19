#include <iostream>
using namespace std;
int main()
{
    int shops = 0;
    cin >> shops;
    int h[shops];
    for(int i = 0; i < shops; i++)
    {
        cin >> h[i];
    }
    for(int i = 0; i < shops; i++)
    {
        if(i == 0)
        {
            cout << (h[i] + h[i + 1]) / 2 << " ";
        }
        else if(i == shops - 1)
        {
            cout << (h[i] + h[i - 1]) / 2 << " ";
        }
        else
        {
            cout << (h[i - 1] + h[i] + h[i + 1]) / 3 << " ";
        }
        
    }
} 

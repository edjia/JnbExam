#include <iostream>
using namespace std;

void walkDA(int n)
{

}

int main()
{
    int m(10), n(0);
    int count(0);
    // cout << m << endl;
    count = 1;
    for (int i = 1; i <= m / 2; i++)
    {
        n = i;
        while(true)
        {
            count++;
            if(n == 1) break;
            n /= 2;
        }
    }
    cout << count;
}
#include <iostream>
using namespace std;

void hanno(int dishNum, char x = 'A', char y = 'B', char z = 'C')
{
    if (dishNum == 1)
    {
        cout << x << " --> " << z << endl;
    }
    else
    {
        hanno(dishNum - 1, x, z, y);
        hanno(1, x, y, z);
        hanno(dishNum - 1, y, x, z);
    }
}
int main()
{
    hanno(3);
}
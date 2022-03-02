#include <iostream>
using namespace std;

int appleNum = 4, dishNum = 2;
int count = 0;
int sum = 0;
void splitNum(int num, int level, int start = 0)
{
    if (level == 1)
    {        
        count++;
        return;
    }
    level--;
    for (int i = start; i <= num; i++)
    {
        if (num - i >= i)
        {
            splitNum(num - i, level, i);
        }        
    }
}
int main()
{
    splitNum(appleNum, dishNum);
    cout << count;
}
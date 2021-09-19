#include <iostream>
using namespace std;
int main()
{
    int jump = 0, score = 0, cscore = 0;
    
    while (cin >> jump)
    {
        if (jump == 0)
        {
            break;
        }
        if (jump == 1)
        {
            score++;
            cscore = 0;
        }
        if (jump == 2)
        {
            cscore += 2;
            score += cscore;
        }
    }
    cout << score;
}

#include <iostream>
using namespace std;

#define DEBUG ;

int main()
{
    const int MAX_N = 10001;
    const int DA_LEN = 4;
    int fibMod[MAX_N][DA_LEN];

    int s(0), t(0), k[DA_LEN];
// #if defined DEBUG
//     s = 1;
//     t = 5;
//     k[0] = 2;
//     k[1] = 3;
//     k[2] = 5;
//     k[3] = 7;
// #elif
    cin >> s >> t >> k[0] >> k[1] >> k[2] >> k[3];
// #endif
    int curFibVal(0);
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < DA_LEN; j++)
        {
            if (i == 0 || i == 1)
                curFibVal = 1;
            else
                curFibVal = fibMod[i - 1][j] + fibMod[i - 2][j];
            fibMod[i][j] = curFibVal % k[j];
        }
    }
    int flag(0);
    for (int i = s - 1; i < t; i++)
    {
        flag = 0;
        for (int j = 0; j < DA_LEN; j++)
        {
            if (fibMod[i][j] == 0)
            {
                flag = 1;
                break;
            }
        }
        if(!flag) cout << i + 1 << " ";
    }
}

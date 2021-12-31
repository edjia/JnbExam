#include <cstdio>
#include <cmath>
#include <cstring>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <sstream>
#include <queue>
#include <typeinfo>
#include <fstream>
#include <map>
typedef long long ll;
using namespace std;
//freopen("D.in","r",stdin);
//freopen("D.out","w",stdout);

#define maxn 10001
#define eps 1e-9
const int inf = 0x7fffffff; //无限大
int main()
{
    int f[maxn];
    f[1] = 1;
    f[2] = 1;
    // for (int i = 3; i <= 10000; i++)
    // {
    //     f[i] = f[i - 1] + f[i - 2];
    // }
    int dp[maxn][4];
    memset(dp, 0, sizeof(0));
    int s, t, k[4];
    cin >> s >> t >> k[0] >> k[1] >> k[2] >> k[3];
    for (int j = 0; j < 4; j++)
    {
        dp[1][j] = f[1] % k[j];
        dp[2][j] = f[2] % k[j];
    }
    for (int i = 3; i <= 10000; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            dp[i][j] = (dp[i - 1][j] + dp[i - 2][j]) % k[j];
            //cout<<i<<" "<<j<<" "<<dp[i][j]<<endl;
        }
    }
    int first = 1;
    for (int i = s; i <= t; i++)
    {
        int flag = 0;
        for (int j = 0; j < 4; j++)
        {
            if (dp[i][j] != 0)
                flag++;
        }
        if (flag == 4)
        {
            if (first)
            {
                cout << i;
                first = 0;
            }
            else
                cout << " " << i;
        }
    }
    cout << endl;
    return 0;
}

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
    for (int i = 2; i <= sqrt(143); i++)
    {
        if(143 % i == 0)
            cout << i * i - 1 << endl;
    }
    
    return 0;
}

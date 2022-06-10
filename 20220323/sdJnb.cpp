#include <bits/stdc++.h>
using namespace std;
int main()
{
	// freopen("SwappingDigits.in", "r", stdin);
	// freopen("SwappingDigits.out", "w", stdout);
    string T;
    cin >> T;
    int l = T.length();
    for (int i = 0; i <= l - 2; ++i)
    {
    	bool F = true;
    	int min = T[i], mincnt;
    	for (int j = i + 1; j <= l - 1; ++j)
    	{
    		if (T[j] <= min && T[i] != T[j])
    		{
    			min = T[j];
    			mincnt = j;
    			F = false;
			}
		}
		if (F == false && i != 0)
		{
			swap (T[i], T[mincnt]);
			break;
		}
		if (F == false && i == 0 && T[mincnt] != '0')
		{
			swap (T[i], T[mincnt]);
			break;
		}
	}
	for (int i = 0; i <= l - 1; ++i)
	{
		cout << T[i];
	}
}
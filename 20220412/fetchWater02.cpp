#include <iostream>
#include <cstring>
using namespace std;
int T[11000];
int main()
{
	int n, m, s = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
	{
		cin >> T[i];
	}
	int dqjsr = m + 1;
	while (dqjsr <= n + m)
	{
		for (int i = 1; i <= m; ++i)
		{
			T[i]--;
			if (T[i] == 0)
			{
				T[i] = T[dqjsr];
				dqjsr++;
			}
		}
		s++;
	}
	cout << s;
}
#include <bits/stdc++.h>
using namespace std;
double T[51], F[51];
int main()
{
	freopen("avg.in", "r", stdin);
	freopen("avg.out", "w", stdout);
	int a, b;
	cin >> a >> b;
	for (int i = 1; i <= b; ++i)
	{
		cin >> T[i];
		F[i] = F[i - 1] + T[i];
	}
	double meanMin = 1001, meanMax = -1;
    double mean = 0.0;
	for (int i = a; i <= b; ++i)
	{
        mean = (F[i] - F[i - a]) / a;
		if ( mean > meanMax )
		{
			meanMax = mean;
		}
		if (mean < meanMin)
		{
			meanMin = mean;
		}
	}
	printf("%.9lf", meanMax - meanMin);
} 
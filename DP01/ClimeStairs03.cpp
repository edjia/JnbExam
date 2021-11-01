#include <iostream>
#define STEPS_MAX 4
#define STAIRS_MAX 1000001
using namespace std;
int main()
{
    long long *pF = new int[STAIRS_MAX], *pV = new int[STAIRS_MAX];
	int a(0);
	cin >> a;
	
	for (int i = 1; i <= a; i++)
	{
		cin >> pV[i];
	}
	pF[0] = 0;
	
	for (int i = 1; i <= a; i++)
	{
		int b = INT_MIN;
		for (int j = 1; j <= STEPS_MAX; j++)
		{
			if (i - j < 0) break;
			if (pF[i - j] > b)
			{
				b = pF[i - j];
			}
		}
		pF[i] = b + pV[i];
	}
	cout << pF[a];
    delete pF;
    delete pV;
}
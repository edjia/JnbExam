#include <iostream>
#define MAX_STEPS
using namespace std;
int main()
{
	int a(0), p(0), V[1002], steps[1002];
	long long  F[1002];
	cin >> a >> p;
	
	for (int i = 1; i <= a; i++)
	{
		cin >> V[i];
        steps[i] = 0;
	}
	
	F[0] = 0;
    V[a + 1] = 0;

	for (int i = 1; i <= a + 1; i++)
	{
		long long b = LONG_MAX;
		for (int j = 1; j <= p; j++)
		{
			if (i - j < 0) break;
			if (F[i - j] < b)
			{
				b = F[i - j];
                
			}
		}
		F[i] = b + V[i];
	}
	cout << F[a + 1];
    long long smallest = F[a + 1];
    int stepsCount = 0;
    for (int i = a; i > 0; i--)
    {
        if (F[i] == smallest)
        {
            stepsCount++;
            steps[stepsCount] = i;
            smallest -= V[i];
            if(smallest <= 0) break;
        }
    }
    
    cout << endl << stepsCount << endl;
    for (int i = stepsCount; i > 0; i--)
    {
        cout << steps[i] << " ";
    }
    
}
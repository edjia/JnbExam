#include <iostream>
using namespace std;
long long citiesPepoles[200001], citiesDistance[200001];
long long citiesCostFromFirst[20001];
int main()
{
    int cityNum;
    cin >> cityNum;
    for (int i = 1; i <= cityNum; ++i)
    {
        cin >> citiesPepoles[i];
    }
    
    for (int i = 1; i <= cityNum; ++i)
    {
        cin >> citiesDistance[i];
        citiesCostFromFirst[i] = citiesDistance[i] * citiesPepoles[i] * 2;
    }
    int assemblyNum;
    cin >> assemblyNum;
    for (int i = 1; i <= assemblyNum; ++i)
    {
        int n, m;
        long long sum = 0;
        cin >> n >> m;
        for (int j = n + 1; j <= m; ++j)
        {
            sum += citiesCostFromFirst[j];
        }
        
        cout << sum << endl;
    }
}
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long k = 9223372036875807;
    int n = 2;
    cin >> k >> n;
    double powKNd = pow(k, 1.0 / n);
    long long powKNi = (long long)powKNd;

    cout << k << " ^ (1/" << n << ") = ";
    if(powKNd - powKNi == 0){
        cout << powKNi;
        return 0;
    }
    for (long long i = powKNi / 2; i > 2; i--)
    {
        int r = k % i;
        if(r == 0){
            cout << i << " * " << n << " ^ (1/" << n << ")";
            return 0;
        }
    }
    cout << k << " ^ (1/" << n << ")"; 
}
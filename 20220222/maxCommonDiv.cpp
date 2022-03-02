#include <iostream>
using namespace std;

int main()
{
    long long n1 = 0, n2 = 0;
    n1 = 111111111111;
    n2 = 222222222222;
    
    while(n1 != n2){
        if(n1 > n2){
            n1 -= n2;
        }
        if(n1 < n2){
            n2 -= n1;
        }
    }
    cout << n1;
}
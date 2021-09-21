#include <iostream>
using namespace std;
int main(){
    int n(0);
    cin >> n;
    while(true){
        cout << n << " ";
        if(n == 1) break;
        if(n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;

    }
}
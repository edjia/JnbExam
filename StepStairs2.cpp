#include <iostream>
#include <vector>
#include <string>

using namespace std;
long long steps(int n){
    if(n == 1) return 1;
    if(n == 2) return 1;
    if(n == 3) return 2;
    return steps(n - 1) + steps(n - 3);
}
int main(){
    int stairs(0);
    cin >> stairs;
    cout << steps(stairs);
    
}

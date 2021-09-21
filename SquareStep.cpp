#include <iostream>
using namespace std;
int stepSquare(int m, int n){
    if(m == 2) return n;
    if(n == 2) return m;
    return stepSquare(m - 1, n) + stepSquare(m, n - 1);
}
int main(){
    cout << stepSquare(3, 4);
}
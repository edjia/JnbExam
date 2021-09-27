#include <iostream>
using namespace std;
int stepSquare(int m, int n){
    if(m == 2) return n;
    if(n == 2) return m;
    return stepSquare(m - 1, n) + stepSquare(m, n - 1);
}
int main(){
    int n(3), m(3);
    int steps[30][30];
    steps[0][0] = 0;
    steps[1][0] = 1;
    steps[0][1] = 1;
    steps[1][1] = 2;
    // for (int i = 0; i < n; i++)
    // {
    //     steps[i][0] = 1;
    // }
    // for (int i = 0; i < m; i++)
    // {
    //     steps[0][i] = 1;
    // }
    
    
    for (int i = 1; i < n; i++)
    {
        steps[i][0] = 1;
        for (int j = 1; j < m; j++)
        {            
            steps[0][j] = 1;
            steps[i][j] = steps[i - 1][j] + steps[i][j - 1];
        }
        
    }
    
    cout << steps[n -1][m - 1];
}
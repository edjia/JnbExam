#include <iostream>
using namespace std;

int main(){
    int n(0);
    int maxVal(0);
    int val(0);
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        if(i == 0 || maxVal < val) maxVal = val;
        
    }
        
    cout << maxVal;

}
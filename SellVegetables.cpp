#include <iostream>
using namespace std;

int main(){
    int n(0), price(0);
    cin >> n;

    int* pa = new int[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> pa[i];
    }    
    for (int i = 0; i < n; i++)
    {
        if(i == 0){
            price = (pa[i] + pa[i + 1]) / 2;
        }
        else if(i == n - 1){
            price = (pa[i] + pa[i - 1]) / 2;
        }
        else{
            price = (pa[i - 1] + pa[i] + pa[i + 1]) / 3;
        }
        cout << price << " ";
    }
    
    delete []pa;
}
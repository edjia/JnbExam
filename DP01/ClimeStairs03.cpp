#include <iostream>
using namespace std;

#define MAX_STEPS 4
int max_happy_value(int valus[], int size)
{
    if (size <= 0)
    {
        return 0;
    }
    else
    {
        int steps = size > MAX_STEPS ? MAX_STEPS : size;
        int v_max = valus[0] + max_happy_value(&valus[1], size - 1);
        for (int i = 1; i < steps; ++i)
        {
            int v = valus[i] + max_happy_value(&valus[i + 1], size - i - 1);
            if (v > v_max)
            {
                v_max = v;
            }
        }
        return v_max;
    }
}

int main()
{
    int stairs = 0;    
    cin >> stairs;
    int vs[stairs];
    for (int i = 0; i < stairs; i++)
    {
        cin >> vs[i];
    }
    
    cout << max_happy_value(vs, stairs);

    return 0;
}
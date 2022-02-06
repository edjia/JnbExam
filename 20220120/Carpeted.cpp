#include <iostream>
using namespace std;
int T[100][100] = {0};
int rectArr[40000] = { 0 };
int main()
{
    int a = 0, l = 0, b = 0, w = 0, h = 0, l2 = 0, b2 = 0;
    int temp = 0;
    cin >> a;
    for (int i = 0; i < a * 4; i++)
    {
        cin >> temp;
        rectArr[i] = temp;
    }
    cin >> l2 >> b2;
    int overlayMax = -1;
    for (int i = 0; i < a; i++)
    {
        int index = i * 4;
        l = rectArr[index + 0];
        b = rectArr[index + 1];
        h = rectArr[index + 2];
        w = rectArr[index + 3];
        if (l2 >= l && l2 <= (l + w) && b2 >= b && b2 <= (b + h))
        {
            overlayMax = i + 1;
        }
    }
    cout << overlayMax;
    /*for (int i = 1; i <= a; ++i)
    {
        cin >> l >> b >> w >> h;   
        for (int j = l; j <= w; ++j)
        {
            for (int k = b; k <= h; ++k)
            {
                T[j][k] = i;
            }
        }
    }
    cin >> l2 >> b2;
    if (T[l2][b2] != 0)
    {
        cout << T[l2][b2];
    }
    else
    {
        cout << "-1";
    }*/
}
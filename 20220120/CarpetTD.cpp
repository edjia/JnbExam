#include <iostream>
using namespace std;

typedef struct
{
    int x, y;
    int width, height;
} Rectangle;

int main()
{

    int rows = 0;
    int px = 0, py = 0;
    Rectangle carpets[10000];
    cin >> rows;
    int currRow = 0;
    for (int i = 0; i < rows; i++)
    {
        cin >> carpets[i].x;
        cin >> carpets[i].y;
        cin >> carpets[i].width;
        cin >> carpets[i].height;
    }
    cin >> px;
    cin >> py;
    int overlayMax = -1;
    for (int i = 0; i < rows; i++)
    {
        if (px >= carpets[i].x && (px <= carpets[i].x + carpets[i].width) &&
            py >= carpets[i].y && (py <= carpets[i].y + carpets[i].height))
        {
            overlayMax = i;
        }
    }
    if(overlayMax > -1) overlayMax++;
    cout << overlayMax;
}
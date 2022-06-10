#include <iostream>
#include <string.h>
using namespace std;
char encode(char key, char c)
{
    bool caseChanged = false;
    int upperLowerOffset = 'a' - 'A';
    if (key > 'Z')
        key -= upperLowerOffset;
    if (c > 'Z')
    {
        caseChanged = true;
        c -= upperLowerOffset;
    }
    int offset = key - 'A';
    c += offset;
    if (c > 'Z')
        c -= 'Z' - 'A' + 1;
    return caseChanged ? c += upperLowerOffset : c;
}
char decode(char key, char m)
{
    bool caseChanged = false;
    int upperLowerOffset = 'a' - 'A';
    if (key > 'Z')
        key -= upperLowerOffset;
    if (m > 'Z')
    {
        caseChanged = true;
        m -= upperLowerOffset;
    }
    int offset = key - 'A';
    m -= offset;
    if (m < 'A')
        m += 'Z' - 'A' + 1;
    return caseChanged ? m += upperLowerOffset : m;
}
int main()
{
    // cout << decode('b', 'f');
    // for (int i = 'A'; i <= 'Z'; i++)
    // {
    //     for (int j = 'A'; j <= 'Z'; j++)
    //     {
    //         cout << encode(i, j) << " ";
    //     }
    //     cout << endl;
    // }
    // return 0;
    char keyArr[101] = "abc";
    char cArr[1001] = "Hfnlpyosnd";
    cin >> keyArr >> cArr;
    char mArr[1001];
    int reloop = 'Z' - 'A' + 1;
    int upperLowerOffset = 'a' - 'A';
    int keyLen = strlen(keyArr);
    int mLen = strlen(cArr);
    for (int i = 0; i < mLen; i++)
    {
        char key = keyArr[i % keyLen];
        // if (key >= 'A' && key <= 'Z')
        //     key += upperLowerOffset;
        // int offset = key - 'a';
        // if (((cArr[i] >= 'A' && cArr[i] <= 'Z') && (cArr[i] - offset < 'A')) ||
        //     ((cArr[i] >= 'a' && cArr[i] <= 'z') && (cArr[i] - offset < 'a')))
        // {
        //     offset -= reloop;
        // }

        // mArr[i] = cArr[i] - offset;
        mArr[i] = decode(key, cArr[i]);
    }
    mArr[mLen + 1] = '\0';
    cout << mArr;
}
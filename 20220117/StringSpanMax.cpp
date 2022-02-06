#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char sf[100];
    char separatedCharArr[3][100];
    cin >> sf;
    int sfLen = strlen(sf);
    int arrCounter = 0, index = 0;
    for (int i = 0; i < sfLen; i++)
    {   
        if(sf[i] != ',')
        {
            separatedCharArr[arrCounter][index] = sf[i];
            index++;
        }    
        else
        {
            separatedCharArr[arrCounter][index] = '\0';
            index = 0;
            arrCounter++;
        }
    }
    separatedCharArr[2][index] = '\0';
    
    string s = separatedCharArr[0], s1 = separatedCharArr[1], s2 = separatedCharArr[2];
    int offset1 = 0;
    int s1FoundPosFirst = -1, s2FoundPosLast = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == s1[offset1])
        {
            offset1++;
            if(offset1 >= s1.size()){
                s1FoundPosFirst = i - offset1 + 1;
                break;
            }
        }
        else{
            offset1 = 0;
        }
    }
    int offset2 = s2.size() - 1;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if(s[i] == s2[offset2])
        {
            offset2--;
            if(offset2 < 0){
                s2FoundPosLast = i;
                break;
            }
        }
        else{
            offset2 = s2.size() - 1;
        }
    }
    
    cout << s2FoundPosLast - s1FoundPosFirst - s1.size();
}
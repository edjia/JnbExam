#include <iostream>
#include <string>
#include <vector>
#include <string.h>

using namespace std;

vector<string> &combination(vector<string> &res, const size_t &choose, string &working, const size_t &pos);

int main()
{
    vector<string> res;
    const size_t choose = 1;
    int nums[] = {43, 57, 21, 91, 52, 75, 47, 80, 50, 39, 45, 29, 31, 38, 38, 12, 8, 60, 87, 13, 28, 24, 60, 39, 9, 8, 45, 11, 6, 61, 10, 54};
    string numsName[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "韩", "黑", "日", "数", "无", "中"};
    int numsUsed[32] = {0};
    int sumAsk[] = {0, 0, 96, 96, 96, 192, 288, 384, 480, 576};
    int numArrLen = sizeof(nums) / sizeof(nums[0]);
    int sumByCount = 5;
    for (int k = 2; k <= 9; k++)
    {
        res.clear();
        string working(numArrLen, '0');
        combination(res, k, working, 0);
        // for (int i = 0; i < numArrLen; i++)
        // {
        //     numsUsed[i] = 0;
        // }
        for (size_t i = 0; i != res.size(); ++i)
        {
            int sum = 0;
            string s = "";
            bool isContinue = false;
            for (size_t j = 0; j != working.size(); ++j)
            {
                if (res[i][j] == '1')
                {
                    if (numsUsed[j] == 1)
                    {
                        isContinue = true;
                        continue;
                    }
                    // cout << j + 1 << ' ';
                    s += numsName[j] + to_string(nums[j]) + ',';
                    sum += nums[j];
                }
            }
            if (!isContinue && sum == sumAsk[k])
            {
                // cout << res[i] << '\t';
                cout << s << '\t' << sum << endl;
                // update used
                for (size_t j = 0; j != working.size(); ++j)
                {
                    if (res[i][j] == '1')
                    {
                        numsUsed[j] = 1;
                    }
                }
            }
        }
    }

    return 0;
}

vector<string> &combination(vector<string> &res, const size_t &choose, string &working, const size_t &pos)
{
    if (choose > working.size() - pos)
        return res;
    for (size_t i = pos; i != working.size(); ++i)
    {
        working[i] = '0';
    }
    if (choose == 0 || pos == working.size())
    {
        res.push_back(working);
        return res;
    }
    working[pos] = '1';
    combination(res, choose - 1, working, pos + 1);
    working[pos] = '0';
    combination(res, choose, working, pos + 1);
    return res;
}
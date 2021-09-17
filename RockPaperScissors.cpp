#include <iostream>
#include <math.h>
using namespace std;

void judge(int p1, int p2, int &score1, int &score2)
{
    if (((p1 - p2) == 1) || (p1 - p2 == -2))
    {
        score1--;
        score2++;
    }
    if (((p1 - p2) == -1) || (p1 - p2 == 2))
    {
        score1++;
        score2--;
    }
}

int main()
{
    int playRounds(0);
    int AScore(0), BScore(0), CScore(0);

    const int PLAYERS_COUNT = 3;

    cin >> playRounds;

    int **paRound = new int *[playRounds];
    for (int i = 0; i < playRounds; i++)
    {
        paRound[i] = new int[3];
    }

    for (int i = 0; i < playRounds * PLAYERS_COUNT; i++)
    {
        cin >> paRound[i / PLAYERS_COUNT][i % PLAYERS_COUNT];
    }

    for (int i = 0; i < playRounds; i++)
    {
        judge(paRound[i][0], paRound[i][1], AScore, BScore);
        judge(paRound[i][0], paRound[i][2], AScore, CScore);
        judge(paRound[i][1], paRound[i][2], BScore, CScore);
    }
    
    cout << AScore << endl << BScore << endl << CScore;

    // for (int i = 0; i < playRounds; i++)
    // {
    //     for (int j = 0; j < PLAYERS_COUNT; j++)
    //     {
    //         cout << paRound[i][j];
    //     }
    // }

    for (int i = 0; i < playRounds; i++)
    {
        delete[] paRound[i];
    }
    delete[] paRound;
}
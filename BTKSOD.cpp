#include <bits/stdc++.h>
using namespace std;

short sudoku[10][10];
bool check_column[10][10], check_row[10][10], check_square[10][10];

void Give_Output()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
            cout << sudoku[i][j] << " ";
        cout << "\n";
    }
}
void solve(short i, short j)
{
    if (j > 9)
    {
        j = 1;
        i++;
    }
    float ii = i, jj = j;
    float temp = (ceil(ii / 3) - 1) * 3 + ceil(jj / 3);

    if (sudoku[i][j] == 0)
    {
        for (int val = 1; val <= 9; val++)
            if (!check_column[val][j] && !check_row[val][i] &&
                !check_square[val][(int)temp])
            {
                sudoku[i][j] = val;
                check_column[val][j] = true;
                check_row[val][i] = true;
                check_square[val][(int)temp] = true;
                if (i == 9 && j == 9)
                {
                    Give_Output();
                    exit(0);
                }
                else
                    solve(i, j + 1);
                check_column[val][j] = false;
                check_row[val][i] = false;
                check_square[val][(int)temp] = false;
                sudoku[i][j] = 0;
            }
    }
    else
    {
        if (i == 9 && j == 9)
        {
            Give_Output();
            exit(0);
        }
        else
            solve(i, j + 1);
    }
}

int main()
{
    for (int i = 1; i <= 9; i++)
        for (int j = 1; j <= 9; j++)
        {
            float ii = i, jj = j;
            float temp = (ceil(ii / 3) - 1) * 3 + ceil(jj / 3);
            cin >> sudoku[i][j];
            check_row[sudoku[i][j]][i] = true;
            check_column[sudoku[i][j]][j] = true;
            check_square[sudoku[i][j]][(int)temp] = true;
        }

    solve(1, 1);
    return 0;
}
    

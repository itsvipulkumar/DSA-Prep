#include <bits/stdc++.h>
using namespace std;

int diagonalSum(vector<vector<int>> &mat)
{
    int r = mat.size();
    int c = mat[0].size();

    int n = mat.size() - 1;
    int pSum = 0, sSum = 0, totalSum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            if (i == j)
                pSum += mat[i][j];
              
        }
          sSum += mat[i][c - i - 1];
    }
    if (c % 2 != 0)
    {
        int d = c / 2;
        totalSum = (pSum + sSum) - mat[d][d];
    }
    else
        totalSum = (pSum + sSum);

    return totalSum;
}
int main()
{
    vector<vector<int>> mat{{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}};
    cout << diagonalSum(mat);
}
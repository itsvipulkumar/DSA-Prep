#include <bits/stdc++.h>
using namespace std;
void spiralOrder(vector<vector<int>> &matrix)
{

    int n = matrix.size();
    int N = n * n;
    int stcol = 0, endcol = n;
    int strow = 0, endrow = n;

    while (N--)
    {
        for (int i = stcol; i < endcol; i++)
        {
            cout << matrix[strow][i] << " ";
        }
        strow++;

        for (int i = strow; i < endrow; i++)
        {
            cout << matrix[i][endcol] << " ";
        }
        endcol--;

        for (int i = endcol; i < stcol; i++)
        {
            cout << matrix[endrow][i] << " ";
        }
        endrow--;

        for (int i = endrow; i < strow; i++)
        {
            cout << matrix[i][stcol] << " ";
        }
        stcol++;
    }
}

int main()
{
    vector<vector<int>> matrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> ans;
    spiralOrder(matrix);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>> &matrix)
{
    int r = matrix.size();
    int c = matrix[0].size();
cout<<"row : "<<r<<endl;
cout<<"col : "<<c<<endl;
    vector<vector<int>> mat(matrix.begin(), matrix.end());

    for (int i = 0; i < r ; i++)
    {
        for (int j = 0; j < c ; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < r ; i++)
    {
        for (int j = 0; j < c ; j++)
        {
            matrix[j][c - i-1] = mat[i][j];
        }
    }
    cout<<endl;
    for (int i = 0; i < r ; i++)
    {
        for (int j = 0; j <=c-1 ; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }


    //  for(int i=0;i)
}
int main()
{
    vector<vector<int>> matrix{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    rotate(matrix);

    return 0;
}
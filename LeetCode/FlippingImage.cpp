#include <bits/stdc++.h>
using namespace std;

void flipAndInvertImage(vector<vector<int>> &image)
{
    int n = image[0].size();
    cout << n << endl;
    vector<vector<int>> mat;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (image[i][j] == 0)
            {
                image[i][j] = 1;
            }
            else if (image[i][j] == 1)
            {
                image[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << image[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl
         << "After invert" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int ans = image[i][n - j - 1];
            vec.push_back(ans);
        }
        mat.push_back(vec);
        vec.clear();
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{

    vector<vector<int>> image{{1, 1, 0}, {1, 0, 1}, {0, 0, 0}};
    flipAndInvertImage(image);
}
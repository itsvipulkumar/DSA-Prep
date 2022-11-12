// coding round question MCA
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N = 3, M = 5;
    int arr[N][M] = {
        {75, 76, 65, 87, 87},
        {78, 76, 68, 56, 89},
        {67, 87, 78, 77, 65}};
    int arr2[N];
    int loc = -1;
    int sum = 0, avg = 0, minAvg = 230129;
    for (int i = 0; i < M; i++)
    {
        sum = 0;
        for (int j = 0; j < N; j++)
        {
            sum += arr[j][i];

            avg = sum / N;
        }
        
        if (avg < minAvg)
        {
            loc = i;
            minAvg = avg;
        }
    }

    for (int i = 0; i < N; i++)
    {
        sum = 0;
        for (int j = 0; j < M; j++)
        {

            if (j == loc)
            {
                arr[i][j] = 0;
            }
        }
      
    }

    for (int i = 0; i < N; i++)
    {
        sum = 0;
        for (int j = 0; j < M; j++)
        {
            sum += arr[i][j];
        }
        arr2[i] = sum;
    }
    for (int i = 0; i < N; i++)
        cout << arr2[i] << " ";
}
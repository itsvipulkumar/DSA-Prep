#include <bits/stdc++.h>
using namespace std;
void commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
// already sorted array 
    int i = 0, j = 0, k = 0;

    set<int> s;
    while (i < n1 && j < n2 && k < n3)
    {
        if (A[i] == B[j] && B[j] == C[k])
        {
            s.insert(A[i]);
            // v.push_back(A[i]);
            i++;
            j++;
            k++;
        }
        else if (A[i] < B[j])
        {
            i++;
        }
        else if (B[j] < C[k])
        {
            j++;
        }
        else
            k++;
    }

    vector<int> v(s.begin(), s.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{

    int n1 = 6, A[] = {3, 3, 3};
    int n2 = 5, B[] = {3, 3, 3};
    int n3 = 8, C[] = {3, 3, 3};

    vector<int> vec2;
    commonElements(A, B, C, n1, n2, n3);
    return 0;
}
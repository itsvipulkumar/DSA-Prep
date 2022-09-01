#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12, 46, 68, 23, 57, 55};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max=arr[0];
    for (int i = 0; i < size; i++)
    {
   if(arr[i]>max)
   max=arr[i];
    }
    cout<<"Maximum elemenst is : "<<max;
    return 0;
}
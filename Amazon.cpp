// CPP program to count frequencies of array items
#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n)
{
	// Mark all array elements as not visited
	vector<bool> visited(n, false);

int sum=0;
	// Traverse through array elements and
	// count frequencies
	for (int i = 0; i < n; i++) {

		// Skip this element if already processed
		if (visited[i] == true)
			continue;

		// Count frequency
		int count = 1;
		for (int j = i + 1; j < n; j++) {
			if (arr[i] == arr[j]) {
				visited[j] = true;
				count++;
			}
		}
		// cout << arr[i] << " " << count << endl;
        if(count==1)
        {
            cout<<"-1"<<" ";
            break;
        }
        else if(count%2==0)
        {
            int ans=count/2;
            sum=sum+ans;
        }
         else if(count%3==0)
         {
            int ans2=count/3;
            sum=sum+ans2;
         }
         cout<<sum;

	}

}

int main()
{
	int arr[] = {7,2,2,4,4,4,4,6,6};
	int n = sizeof(arr) / sizeof(arr[0]);
	countFreq(arr, n);
	return 0;
}

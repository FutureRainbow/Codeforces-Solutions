#include <iostream>
#include <cmath>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
 
using namespace std;
int main()
{
	int n, k;
	int arr[150002] = { 0 };
	cin >> n >> k;
	int l = 0, z, t = 15000001;
 
 
	for (int i = 1;i <= n;i++)
	{                 
		cin >> arr[i];                          
		arr[i] += arr[i - 1];
	}
 
 
	for (int i = k;i <= n;i++)
	{
		if (t > arr[i] - arr[i - k])
		{
			t = arr[i] - arr[i - k];
			z = i;
		}
 
 
	}
	cout << z - k + 1;
 
 
 
	return 0;
}

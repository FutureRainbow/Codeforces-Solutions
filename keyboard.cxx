#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, x;
	cin >> n >> m >>x;
	int array[n][m];
	vector<int> sx;
	vector<int> sy;
	for (int i = 0; i<n; i++){
		for (int j = 0; j<m; j++){
			cin >> array[i][j];
			if (array[i][j] == 'S'){
				sx.push_back(i);
				sy.push_back(j);
			}
		}
	}
	int T;
	cin >> T;
	string s;
	cin >> s;
	
	return 0;
}


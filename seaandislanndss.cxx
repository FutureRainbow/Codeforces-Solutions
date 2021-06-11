#include <iostream>
using namespace std;

int main()
{
	
	int n, k;
	int s[n][n];
	cin >> n >> k;
	if ((n*n)/2 < k){
		cout << "NO" << endl;
	}
	else {
		int m = 0;
		int isle = 0;
		for (int i = 0; i<n; i++){
			int j = 0;
			while (j<n){
				s [i][j] = 'S';
				j++;
			}
		}
		for ( int i = 0; i<n; i++){
			for (int j = m; j<n; j+=2){
				if (isle = k)
				{
					cout << "YES" << endl;
					for (int x = 0; x < n; x++)
				{
					for (int y = 0; y < n; y++)
						cout << s[x][y];
						cout << endl;
				}
					return 0;
				}
				s[i][j] = 'L';
				isle++; 
			}
			m = !m;
		}
		if (k == isle)
		{
			cout << "YES\n";
			for (int x = 0; x < n; x++)
			{
				for (int y = 0; y < n; y++)
					cout << s[x][y];
					cout << endl;
			}
	
			return 0;
		}
	}
	return 0;
}


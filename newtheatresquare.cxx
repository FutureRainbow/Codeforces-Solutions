#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >>t;
	int array[t];
	int n, m, x, y;
	
	string s;
	for (int i = 0; i<t; i++){
		int singlewhitetiles = 0;
		int doublewhite = 0;
		cin >> n >> m >> x >>y;
		if (2*x > y){
			for (int j = 0; j<n; j++){
				cin >> s;
				for (int u = 0; u<m; u++){
					if (s[u] == '.'){
						singlewhitetiles++;
						if (s[u+1] == '.'){
							singlewhitetiles--;
							doublewhite++;
							u++;
						}
					}
				}
			}
		}
		else {
			for (int j = 0; j<n; j++){
				cin >> s;
				for (int u = 0; u<m; u++){
					if (s[u] == '.'){
						singlewhitetiles++;
					}
				}
			}
			
						
						
		}
		array[i] = singlewhitetiles*x + doublewhite*y;
				
	}
	for (int f = 0; f<t; f++){
		cout << array[f] << endl;
	}
	
			
	return 0;
}


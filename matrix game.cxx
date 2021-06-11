#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	
	
	
	
	for (int i = 0; i<t; i++){
		int a = 0;
		int b = 0;
		int n, m;
		cin >> n >> m;
		int row[n] = {0};
		int column[m] = {0};
		int array[n][m] = {0};
		int perfect;
		int c = 0;
		for (int j = 0; j<n; j++){
			while(c<m){
				if ( row[j] == 0 && column [c] == 0){
						cin >> array[j][c];
						if (array[j][c] == 1){
							row[j] = 1;
							column[c] = 1;
						}
					
					}
					else if(row[j] == 0 && column [c] != 0){
						cin >> array[j][c];
						if (array[j][c] == 1){
							row[j] = 1;
						}
					}
					else if (row[j] !=0 && column[c] == 0){
						cin >> array[j][c];
						if (array[j][c] == 1){
							column[c] = 1;
						}
					
					}
					else{
						cin >> array[j][c];
					
					}
					c++;
				}
				c = 0;
				}
		
	
		for (int g = 0; g<n; g++){
		if (row[g] == 0){
			a++;
		}
		if (column[g] == 0){
			b++;
		}
	}
	
		
		if (a<b){
			perfect = a;
		}
		else{
			perfect = b;
		}
		if (perfect%2 == 0){
			cout << "Vivek" << endl;
		}
		else{
			cout << "Ashish" << endl;
		}
	}
		
	return 0;
}


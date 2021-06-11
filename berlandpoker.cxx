#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int array[t];
	int n, m, k, card;
	
	for (int i = 0; i<t; i++){
		cin >> n >> m >> k;
		card = n/k;
		if (m<=card){
			array[i] = m;
		}
		else {
			m = m-card;
			if (m%(k-1) != 0){
				array[i] = (card - (m/(k-1) + 1));
			}
			else {
				array[i] = (card - m/(k-1));
			}
		}
	}
	for (int j = 0; j<t; j++){
		cout << array[j] << endl;
	}
	
	return 0;
}


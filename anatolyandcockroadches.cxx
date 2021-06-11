#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int x = 0;
	int y = 0;
	int max1;
	int max2;
	for (int i = 0; i<n; i+=2){
		if (s[i] == 'r'){
		}
		else{
			x++;
		}
	}
	for (int i = 1; i<n; i+=2){
		if (s[i] == 'b'){
		}
		else{
			y++;
		}
	max1 = max(x, y);
	x = 0;
	y = 0;
	for (int i = 0; i<n; i+=2){
		if (s[i] == 'b'){
		}
		else{
			x++;
		}
	}
	for (int i = 1; i<n; i+=2){
		if (s[i] == 'r'){
		}
		else{
			y++;
		}
		}
	max2 = max(x, y);
}
	if (max1 > max2){
		cout << max2 << endl;
	}
	else{
		cout << max1 << endl;
	}
	
	return 0;
}


#include <bits/stdc++.h>
using namespace std;
int main()
{
	int h, c, t;
	int T;
	int ans[t];
	int min1, min2, min3;
	int min =100000000;
	int counter = 0;	
	cin >> T;
	for (int i = 0; i<T; i++){
		int currenttemp = 0;
		cin >> h >> c >> t;
		currenttemp = h;
		min1 = abs(h-t);
		
		currenttemp = (h+c)/2;
		if ((currenttemp-t)< min1){
			min1 = (currenttemp-t);
		}
		else {
			min2 = currenttemp-t;
		}
		min3 = 10000000000;
		while(currenttemp < min3){
			int a = 2;
			int b = 1;
			currenttemp = (a*h+b*c)/(a+b);
			
			if (currenttemp < min3){
				min3 = currenttemp;
			
			}
			a++;
			b++;
		}
		}
			
				ans[i] = (a-1) + (b-1);
				break; 	
	}		
	for (int j = 0; j<t; j++){
		cout <<ans[j] <<endl;
	}
	return 0;
}


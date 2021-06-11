#include <iostream>
using namespace std;
int main()
{
	long long n, k;
	long long range;
	cin >> n >>k;
	long long answer;
	if(n%2 == 0){
		range = n/2;
		if (range >= k){
			answer = 2*k-1;
		}
		else{
			k = k - range;
			answer = 2*k;
		}
	}
	else {
		range = n/2 + 1;
		if (range >= k){
			answer = 2*k -1;
		}
		else{
			k = k - range;
			answer = 2*k;
		}
	}
	
	
	cout << answer << endl;
	
	return 0;
}


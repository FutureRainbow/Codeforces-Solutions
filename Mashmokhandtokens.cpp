#include <iostream>
using namespace std;

int main()
{
	int n;
	long long a, b;
	int array;
	cin >> n >> a >> b;
	for (int i = 0; i<n; i++){
		cin >>array;
		cout << ((array*a)%b)/a << endl;
	}
	
		
	
	
	return 0;
}


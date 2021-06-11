
#include <iostream>
using namespace std;

int main()
{
	int M;
	int N;
	int output;
	
	cin >> M >> N;
	
	if( (M%2 == 0) | (N%2 == 0)){
		output = (M*N) / 2;
	}
	else {
		output = (M*N)/ 2;
	}
	cout << output << endl;
	return 0;
}


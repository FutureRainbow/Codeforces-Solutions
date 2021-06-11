#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string plusminus;
	int output = 0;
	for (int y = 0; y < n; y++){
		cin >> plusminus;
		if (plusminus.substr(1,1) == "+"){
			output++;
		}
		else {output--;}
	}
	cout << output << endl;
	return 0;
}


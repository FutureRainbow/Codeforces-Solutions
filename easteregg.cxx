#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int remainderss;
	
	int round;
	round = (n-7)/4;
	remainderss = (n-7)%4;
	cout << "ROYGBIV";
	for (int i = 0; i<round; i++){
		cout << "GBIV";
	}
	if (remainderss == 3){
		cout << "GBI";
	}
	else if (remainderss == 2){
		cout << "GB";
	}
	else if (remainderss == 1){
		cout << "G";
	}
	else {}
	
	return 0;
}


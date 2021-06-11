#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int n;
	int m;
		for (int i =0; i<t; i++){
			cin >> n;
			cin >> m;
			if(n>2){
				cout << 2*m << endl;
			}
			else if(n == 1){
				cout << 0 << endl;
			}
			else{
				cout << m << endl;
			}
		}
	return 0;
}


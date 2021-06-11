#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int output = 0;
	
	for (int i = 0; i<n ;i++){
		if (s[i] ==s[i+1]){
			output ++;
		}
		else {}
	}
	cout << output << endl;
	
			
					
	return 0;
}


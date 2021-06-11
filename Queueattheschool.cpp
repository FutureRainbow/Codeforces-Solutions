#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int n;
	int t;
	cin >> n >> t;
	string s;
	cin >> s;
	for (int i = 0; i<t; i++){
		for (int k =1; k<n; k++){
			if(s[k] == 'G' && s[k-1] =='B'){
				s[k] = 'B';
				s[k-1] = 'G';
				++k;
			}
		}
	}
	cout << s << endl;
	return 0;
}


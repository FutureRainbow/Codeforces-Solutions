#include <iostream>
using namespace std;
//1,6  2,5 ,3,4 
int main()
{
	int n;
	cin >> n;
	int top;
	cin >> top;
	int a, b;
	string output = "YES";
	for(int i = 1; i<=n; i++){
		cin >> a;
		cin >> b;
		if(a == top || b == top || a == 7-top || b == 7-top){
			output = "NO";
		}
	}
	cout << output << endl;
		
	return 0;
}


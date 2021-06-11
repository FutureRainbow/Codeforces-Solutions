#include <iostream>
using namespace std;
int main()
{
	int n;
	long long x;
	cin >> n >> x;
	char operators;
	long long num;
	int distress = 0; 
	for (int i = 0; i<n; i++){
		cin >> operators >> num;
		if(operators == '-' && num <=x){
			x = x-num;
		}
		else if (operators == '+'){
			x = x+num;
		}
		else{distress ++;}
	}
	cout << x << " " << distress << endl;
	
			
	return 0;
}


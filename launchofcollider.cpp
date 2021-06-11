#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string leftright;
	cin >> leftright;
	long long shortest = 0;
	long long  trueshorstest = 10000000000000000;
	long long  coor[n];
	for (int i = 0; i<n; i++){
		cin >> coor[i];
	}
	for (int j = 0; j<n-1; j++){
		if (leftright[j] == 'R' && leftright[j+1] == 'L'){
			shortest = coor[j+1] - coor[j];
			if(shortest < trueshorstest){
				trueshorstest = shortest;
			}
		}
		else{continue;}
	}
	
	if (shortest != 0){
		cout << trueshorstest/2 << endl;
	}
	else {
		cout <<-1<< endl;
	}
	return 0;
}


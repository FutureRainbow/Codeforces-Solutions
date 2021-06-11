#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int magnet[n];
	for (int j = 0; j<n; j++){
	cin >> magnet[j];
	}
	int group = 1;
	
	for (int i = 0; i <n-1; i++){
		if (magnet[i] != magnet[i+1]){
			group++;
		}
	}
	cout << group << endl;
	
	return 0;
}


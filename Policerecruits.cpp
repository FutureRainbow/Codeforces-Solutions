#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int n;
	cin >> n;
	
	int crime[n];
	for (int j = 0; j<n; j++){
		cin >> crime[j];
	}
	int police = 0;
	int untreated = 0;
	for (int i = 0; i<n; i++){
		if (crime[i] > 0){
			police = police + crime[i];
		}
		else{
			police--;
			if(police<0){
				police++;
				untreated++;
			}
		}
	}
	cout << untreated << endl;
	return 0;
}


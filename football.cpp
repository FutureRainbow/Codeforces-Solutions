#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int n;
	cin >> n;
	string array[n];
	string first;
	string notfirst;
	int firstcounter = 0;
	for( int i = 0; i<n; i++){
		cin >> array[i];
	}
	first = array[0];
	for (int i = 0; i<n; i++){
		if(array[i] == first){
			firstcounter++;
		}
		else {
			notfirst = array[i];
		}
	}
	if (firstcounter >= (n+1)/2){
		cout << first << endl;
	}
	else {
		cout <<notfirst << endl;
	}
	
	
	return 0;
}


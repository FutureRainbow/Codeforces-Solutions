#include <iostream>
using namespace std;

int main()
{
	int y;
	int w;
	int largest;
	int n;
	int answer;
	cin >>y >> w;
	if( y > w){
		largest = y;
	}
	else{
		largest = w;
	}
	n = 6-largest+1;
	
	if (n == 6){
		cout<< "1/1" << endl;
	}
	else if(n == 3){
		cout << "1/2" << endl;
	}
	else if(n == 4){
		cout << "2/3" << endl;
	}
	else if(n == 2){
		cout << "1/3" << endl;
	}
	else if(n == 1){
		cout << "1/6" <<endl;
	}
	else if(n == 5){
		cout << "5/6" << endl;
	}
	
		
	return 0;
}


#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n], b[n];
	int rated = 0;
	int unrated = 0;
	for (int i = 0; i<n; i++){
		cin >> a[i] >> b[i];
		if(a[i]!=b[i]){
			rated = 1;
		}
	}
	for(int j = 0; j<n-1; j++){
		if(a[j]<a[j+1]){
			unrated = 1;
		}
	}
	if(rated == 0 && unrated == 0){
		cout << "maybe" << endl;
	}
	else if(rated == 1){
		cout << "rated" << endl;
	}
	else if(unrated == 1){
		cout << "unrated" <<endl;
	}
	
		
	return 0;
}


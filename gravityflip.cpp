#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a;
	cin >> a;
	int mas[a];
	for (int i =0; i<a; i++){
		cin >> mas[i];
	}
	sort(mas, mas+a);
	for (int i = 0; i<a; i++){
		cout << mas[i] << " ";
	}
	
	return 0;
}


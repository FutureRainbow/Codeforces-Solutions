#include <iostream>
#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s1;
	string s2;
	cin >> s1 >> s2;
	int results;
	transform(s1.begin(),s1.end(), s1.begin(), ::tolower);
	transform(s2.begin(),s2.end(), s2.begin(), ::tolower);
	results = s1.compare(s2);
	if (results == 0){
		cout << 0 << endl;}
	else if (results < 0){
		cout << -1 << endl;
	}
	else {
		cout << 1 << endl;
	}
	
	
			
		
	return 0;
}


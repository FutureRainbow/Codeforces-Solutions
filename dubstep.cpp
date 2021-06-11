#include <iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;
	for(int i = 0; i<s.size(); i++){
		if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
			s.erase(i, 3);
			s.insert(i, " ");
			i--;
		}
	}
	while(s[0] == ' '){
		s.erase(0, 1);
	}
	for (int j = 0; j<s.size(); j++){
		if(s[j] == ' ' && s[j+1] == ' '){
			s.erase(j, 1);
			j--;
		}
	}
	
	while(s[s.size()-1] == ' '){
		s.erase((s.size()-1), 1);

}
	cout <<  s << endl;
	return 0;

}

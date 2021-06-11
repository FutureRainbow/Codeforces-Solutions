#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int a, first_slept, c, d;
	int subtruesleep;
	int answer[t];
	int output[t];
	int z = 1;
	for (int i = 0; i<t; i++){
		z = 1;
		cin >> a >> first_slept >> c >> d;
		subtruesleep = c-d;
		if( subtruesleep < 0 && first_slept < a){
			output[i] = -1;
		}
		
		else if(first_slept>=a){
			output[i] = first_slept;
		}
		else {
			while(answer[i] < a){
				answer[i] = first_slept + z*subtruesleep;
				output[i] = first_slept + z*(c);
				++z;
				break;
			}
		}
	
	}
	for (int j = 0; j<t; j++){
		cout << output[j] << endl;
	}
	
					
	return 0;
}


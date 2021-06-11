
#include <bits/stdc++.h>
using namespace std;
struct myfunc
{
    bool operator()(const vector<double>& s1,
                    const vector<double>& s2) const
    {
    	if(s1[0]==s2[0])
    		return s1[1] < s2[1];
        return s1[0] > s2[0];
    }
};
int main()
{
	double n,t1,t2,k,a,b,maximum;
	cin>>n>>t1>>t2>>k;
	vector< vector<double> >m(n,vector<double>(2));
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
	    maximum=max(((a*t1)-((a*t1)*(k/100)))+b*t2,((b*t1)-((b*t1)*(k/100))+a*t2));
		m[i][0]=maximum,m[i][1]=i+1;
	}
	sort(m.begin(),m.end(),myfunc());
	for(int i=0;i<n;i++)
	{
	    cout<<m[i][1]<<" ";
	    printf("%.2lf\n",m[i][0]);
	}
	return 0;
}

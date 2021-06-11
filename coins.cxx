#include <bits/stdc++.h>
 
using namespace std;
int x[3];
int main()
{
    char a[3],b[3],c[3];
    map<char,int> m;
    m['A']=0;
    m['B']=0;
    m['C']=0;
    for(int i=0;i<3;i++){
        cin>>a[i]>>b[i]>>c[i];
        if(b[i]=='>') m[c[i]]++;
        else m[a[i]]++;
    }
    map<int,char> mp;
    int j=0;
    for(auto i:m){
        mp[i.second]=i.first;
        x[j]=i.second;
        j++;
    }
    sort(x,x+3);
    if(x[0]==0&&x[1]==1&&x[2]==2)cout<<mp[2]<<mp[1]<<mp[0];
    else cout<<"Impossible";
 
    return 0;
}

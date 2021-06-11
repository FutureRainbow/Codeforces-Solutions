#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi (4*atan(1.0))
#define eps 1e-14
const int N=2e5+10,M=1e6+10,inf=1e9+10,mod=1e9+7;
int a[N];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    int ans=inf;
    for(int i=2;i<n;i++)
    {
        int maxx=0;
        for(int t=2;t<=n;t++)
        {
            if(i==t)continue;
            if(i+1==t)
                maxx=max(maxx,a[t]-a[t-2]);
            else
                maxx=max(maxx,a[t]-a[t-1]);

        }
        ans=min(ans,maxx);
    }
    printf("%d\n",ans);
    return 0;
}
unsolved!

#include <bits/stdc++.h>
/* all header files included */

#define fs            first
#define sc            second
#define sp            printf(" ")
#define nl            printf("\n")
#define pb(a)         push_back(a)
#define mp(a,b)       make_pair(a,b)

#define set0(a)       memset(a,0,sizeof(a))
#define setinf(a)     memset(a,126,sizeof(a))

#define tc1(x)        printf("Case %d: ",x)
#define tc2(x)        printf("Case #%d: ",x)
#define tc3(x)        printf("Case %d:\n",x)
#define tc4(x)        printf("Case #%d:\n",x)

#define pr1(x)        cout<<x<<"\n"
#define pr2(x,y)      cout<<x<<" "<<y<<"\n"
#define pr3(x,y,z)    cout<<x<<" "<<y<<" "<<z<<"\n"
#define pr4(w,x,y,z)  cout<<w<<" "<<x<<" "<<y<<" "<<z<<"\n"
#define prflag1(flag) printf("%s\n",(flag)?"YES":"NO")
#define prflag2(flag) printf("%s\n",(flag)?"Yes":"No")
#define prflag3(flag) printf("%s\n",(flag)?"First":"Second")
/* defining macros */

using namespace std;

template <class T> inline T bigmod(T b, T p, T m)
{
    T ret;
    if(p==0) return 1;
    if(p&1)
    {
        ret=(bigmod(b,p/2,m)%m);
        return ((b%m)*ret*ret)%m;
    }
    else
    {
        ret=(bigmod(b,p/2,m)%m);
        return (ret*ret)%m;
    }
}
/* template functions */

typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int, int>pii;
typedef pair<LL, LL>pll;
typedef vector<int>vi;
typedef vector<LL>vll;
typedef vector<pii>vpii;
typedef vector<pll>vpll;
/* type definition */

int dx4[]= {1,-1,0,0};
int dy4[]= {0,0,1,-1};
int dx6[]= {0,0,1,-1,0,0};
int dy6[]= {1,-1,0,0,0,0};
int dz6[]= {0,0,0,0,1,-1};
int dx8[]= {1,-1,0,0,-1,1,-1,1};
int dy8[]= {0,0,1,-1,1,1,-1,-1};
int dkx8[]= {-1,1,-1,1,-2,-2,2,2};
int dky8[]= {2,2,-2,-2,1,-1,1,-1};
/* direction array */

int tc=1;
const double eps=1e-9;
const double pi=acos(-1.0);
const long long int mx=100;
const long long int mod=1000000007;
/* global declaration */

bool visited[mx+5][mx+5];

int main()
{
    LL i,j,k,n,m,a[mx+5],p,q;
    while(cin>>n>>m>>k)
    {
        vpll indices;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++) scanf("%lld",&a[j]);

            for(p=1; p<=m; p++)
            {
                for(q=p+1; q<=m; q++)
                {
                    if(k)
                    {
                        if(a[p]<a[q])
                        {
                            visited[q][p]=true;
                            swap(a[p],a[q]);
                        }
                    }
                    else
                    {
                        if(a[p]>a[q])
                        {
                            visited[p][q]=true;
                            swap(a[p],a[q]);
                        }
                    }
                }
            }

        }
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(visited[i][j]) indices.pb(pll(i,j));
            }
        }
        pr1(indices.size());
        for(i=0;i<indices.size();i++) pr2(indices[i].fs,indices[i].sc);
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std ;
typedef long long ll;
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define meminf(a) memset(a,127,sizeof(a));
 
inline ll read()
{
    ll x=,f=;char ch=getchar();
    '){
        ;ch=getchar();
    }
    '){
        x=x*+ch-';ch=getchar();
    }return x*f;
}
//****************************************
#define maxn 1000+5
#define mod 1000000007
 
int c[maxn][maxn],b[maxn][maxn],a[maxn][maxn];
int main(){
 
   int n=read();
    int m=read();
    memset(b,-,sizeof(b));
    ;i<=n;i++){
        ;j<=m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    ;i<=n;i++){
        ;j<=m;j++){
            ){
                ;k<=m;k++){
                    b[i][k]=;
                }
                ;k<=n;k++){
                    b[k][j]=;
                }
            }
        }
    }
    ;i<=n;i++){
        ;j<=m;j++){
            )b[i][j]=;
        }
    }
    ;i<=n;i++){
        ;j<=m;j++){
                ;
                ;k<=m;k++){
                    aa|=b[i][k];
                }
                ;k<=n;k++){
                    aa|=b[k][j];
                }
                c[i][j]=aa;
        }
    };
    ;i<=n;i++){
        ;j<=m;j++){
            ;
        }
    }
    if(!flag){
        cout<<"YES"<<endl;
        ;i<=n;i++){
            ;j<=m;j++){
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else cout<<"NO"<<endl;
  ;
}
unsolved!

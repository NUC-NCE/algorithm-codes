#include<bits/stdc++.h>
#define rep(a,b,i) for(int i=a;i<=b;i++)
#define reps(a,b,i) for(int i=a;i>=b;i--)
#define sd(x) scanf("%d",&x)
#define ss(x) scanf("%s",x)
#define sc(x) scanf("%c",&x)
#define sf(x) scanf("%f",&x)
#define slf(x) scanf("%lf",&x)
#define slld(x) scanf("%lld",&x)
#define me(x,b) memset(x,b,sizeof(x))
#define pd(d) printf("%d\n",d)
#define plld(d) printf("%lld\n",d)
typedef long long ll;
using namespace std;
int x[510000];
/*
0                  2
0 1                4  6
0 1 2 3            8  10 12 14
0 1 2 3 4 5 6 7    16 18 20 22 24 26 28 30
*/
int main()
{
    int n;
    while(cin>>n){
        if(n%2)
            cout<<(n>>1)<<endl;
        else{
            int m=2;
            while(m<=n){
                m*=2;
            }
            m/=2;
            cout<<((n-m)>>1)<<endl;
        }
    }
    return 0;
}

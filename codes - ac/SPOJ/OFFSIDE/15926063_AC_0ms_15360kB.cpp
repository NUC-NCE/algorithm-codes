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
#define pd(d) printf("%d\n",d);
using namespace std;
typedef long long ll;
typedef long long LL;
typedef double dd;
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF&&n&&m){
        vector<int>A;
        vector<int>B;
        for(int i=0;i<n;i++){
            int x;
            scanf("%d",&x);
            A.push_back(x);
        }
        for(int i=0;i<m;i++){
            int x;
            scanf("%d",&x);
            B.push_back(x);
        }
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        if(A[0]<B[1])
            puts("Y");
        else
            puts("N");
    }
    return 0;
}
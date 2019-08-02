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
#define plf(d) printf("%.2lf\n",d)
#define eps 1
using namespace std;
typedef long long ll;
struct node
{
    string s;
    int v=0;
}a[110];
bool cmp(node a,node b){
    return a.v<b.v;
}
int main()
{
    int n,m;
    string x;
    cin>>n>>m;
    rep(1,m,i){
        cin>>a[i].s;
        rep(0,n-1,j){
            rep(j,n-1,k){
                if(a[i].s[k]<a[i].s[j])
                    a[i].v++;
            }
        }
    }
    stable_sort(a+1,a+1+m,cmp);
    rep(1,m,i)
        cout<<a[i].s<<endl;
}
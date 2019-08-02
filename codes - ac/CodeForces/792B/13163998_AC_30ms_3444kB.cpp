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
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int n,k;
int main()
{
    queue<int>a;
    int x[110];
    cin>>n>>k;
    rep(1,n,i)
        a.push(i);
    rep(1,k,i)
        cin>>x[i];
    int coach=1;
    rep(1,k,i){
        x[i]%=(a.size());
        rep(0,x[i]-1,j){
            a.push(a.front());
            a.pop();
        }
        cout<<a.front()<<' ';
        a.pop();
    }
    cout<<endl;
    return 0;
}







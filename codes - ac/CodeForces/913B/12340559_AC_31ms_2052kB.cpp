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
#define plld(d) printf("%lld\n",d);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int n;
int p[1010];
map<int, int> m, M;
int main()
{
    cin>>n;
    rep(2,n,i)
        cin>>p[i];
    rep(2,n,i) {
        m[p[i]]++;
        M[p[i]]++;
    }
    map<int, int>::iterator it;
    for(it = M.begin(); it != M.end(); it++){
        if(p[(*it).first] > 0)
            m[p[(*it).first]]--;
    }
    for(it = m.begin(); it != m.end(); it++){
        if(m[(*it).first] < 3)
        {
            puts("No");
            return 0;
        }
    }
    puts("Yes");
    return 0;
}
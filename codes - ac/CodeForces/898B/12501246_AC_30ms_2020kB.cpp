#include<bits/stdc++.h>
#define rep(a,b,i) for(int i=1;i<=n;i++)
#define sd(x) scanf("%d",&x)
#define ss(x) scanf("%s",&x)
#define sc(x) scanf("%c",&x)
#define sf(x) scanf("%f",&x)
#define slf(x) scanf("%lf",&x)
#define slld(x) scanf("%lld",&x)
#define me(x,b) memset(x,b,sizeof(x))
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int a,b,c;
int main()
{
	cin>>c>>a>>b;
	int flag=1;
	for(int i=0;i<=c/a;i++)
    {
        if((c-a*i)%b==0)
        {
            puts("YES");
            cout<<i<<' ';
            cout<<(c-a*i)/b<<endl;
            return 0;
        }
    }
    puts("NO");
	return 0;
}
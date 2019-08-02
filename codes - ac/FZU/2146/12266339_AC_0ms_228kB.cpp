#include<cstdio>
#include<string>
#include<iostream>
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
typedef unsigned long long ull;
const int mod=1e9+7;
string s;
int main()
{
    int n;
    sd(n);
    rep(1,n,i){
        cin>>s;
        printf("Case %d: ",i);
        if(s.length()%2==0)
            printf("Even\n");
        else
            printf("Odd\n");
    }
	return 0;
}
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
int a[5050];
int main()
{
     int n;
    sd(n);
    int flag;
    while(n--)
    {
        int d;
        sd(d);
        flag=0;
        for(int i=0;i<34;i++){
            for(int j=0;j<15;j++){
                if(i*3+j*7==d){
                     flag=1;
                }
            }
        }
        if(flag==1)
            puts("YES");
        else
            puts("NO");
    }
}

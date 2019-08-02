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
typedef unsigned long long ull;
int main()
{
    int t;
    sd(t);
    while(t--){
        char ch[5];
        int a,b;
        scanf("%s%d%d",ch,&a,&b);
        if(ch[0]=='+')
            printf("%d\n",a+b);
        else if(ch[0]=='-')
            printf("%d\n",a-b);
        else if(ch[0]=='*')
            printf("%d\n",a*b);
        else if(a/b*b==a)
            printf("%d\n",a/b);
        else
            printf("%.2f\n",1.00*(double)a/((double)b));
    }
}

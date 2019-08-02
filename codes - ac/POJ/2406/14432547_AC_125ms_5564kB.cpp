#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#include<cstring>
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
int nexts[1000005];
int len;
char str[1000001];
void KMP()
{
    int i=0;
    int j=-1;
    nexts[0]=-1;
    len=strlen(str);
    while(i<len)
    {
        if(j==-1||str[i]==str[j])
        {
            i++;
            j++;
            nexts[i]=j;
        }
        else
            j=nexts[j];
    }
}
int main()
{
    int ans;
    while(~scanf("%s",str)&&str[0]!='.')
    {
        KMP();
        if(len%(len-nexts[len])==0)
            ans=len/(len-nexts[len]);
        else
            ans=1;
        printf("%d\n",ans);
        memset(str,0,sizeof(str));
    }
    return 0;
}

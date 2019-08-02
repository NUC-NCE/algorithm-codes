#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cstdlib>
using namespace std;
int n;
const int maxn=100100;
int h[maxn];
int l[maxn];
int r[maxn];
int st[maxn];
void solve()
{
    int t=0;
    for(int i=0;i<n;i++)
    {
        while(t>0&&h[st[t-1]]>=h[i])
            t--;
        l[i]=t==0?0:(st[t-1]+1);
        st[t++]=i;
    }
    t=0;
    for(int i=n-1;i>=0;i--)
    {
        while(t>0&&h[st[t-1]]>=h[i])
            t--;
        r[i]=t==0?n:st[t-1];
        st[t++]=i;
    }
    long long res=0;
    for(int i=0;i<n;i++)
    {
        if(res<(long long)h[i]*(r[i]-l[i]))
            res=(long long)h[i]*(r[i]-l[i]);
    }
    printf("%lld\n",res);
}
int main()
{
    while(~scanf("%d",&n)&&n)
    {
        for(int i=0;i<n;i++)
        scanf("%d",&h[i]);
        solve();
        memset(h,0,sizeof(h));
        memset(r,0,sizeof(r));
        memset(l,0,sizeof(l));
        memset(st,0,sizeof(st));
    }
    return 0;
}
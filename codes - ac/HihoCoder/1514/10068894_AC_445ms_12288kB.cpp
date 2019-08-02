#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
typedef long long LL;
const int INF=2e9;
const int maxn=100000+10;
int n, m, l;
int a[maxn], b[maxn], c[maxn];
int main()
{
    scanf("%d%d%d",&n,&m,&l);
    for(int i = 1; i<=n; i++) scanf("%d",&a[i]);
    for(int i = 1; i<=m; i++) scanf("%d",&b[i]);
    for(int i = 1; i<=l; i++) scanf("%d",&c[i]);
    sort(b+1,b+1+m);
    sort(c+1,c+1+l);
    int ans = INF;
    for(int i = 1; i<=n; i++)
    {
        int s=lower_bound(b+1,b+1+m,a[i])-(b+1);
        int t=lower_bound(c+1,c+1+l,a[i])-(c+1);
        if(s>0&&t>0)  
			ans = min(ans,abs(a[i]-b[s])+abs(a[i]-c[t])+abs(b[s]-c[t]));
        if(t>0)  
			ans = min(ans, abs(a[i]-b[s+1])+abs(a[i]-c[t])+abs(b[s+1]-c[t]));
        if(s>0)  
			ans = min(ans, abs(a[i]-b[s])+abs(a[i]-c[t+1])+abs(b[s]-c[t+1]));
        ans = min(ans, abs(a[i]-b[s+1])+abs(a[i]-c[t+1])+abs(b[s+1]-c[t+1]));
    }
    printf("%d\n",ans);
}


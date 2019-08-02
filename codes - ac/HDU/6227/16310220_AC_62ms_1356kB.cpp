#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=110;
int a[maxn],b[maxn];
int main()
{
    
    int T;
    scanf("%d",&T);
    for(int cas=1;cas<=T;cas++){
        int n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            scanf("%d",&a[i]);
        int sum=0;
        for(int i=2;i<=n;i++)
            sum+=a[i]-a[i-1]-1;
        printf("%d\n",sum-min(a[2]-a[1]-1,a[n]-a[n-1]-1));
    }
    return 0;
}

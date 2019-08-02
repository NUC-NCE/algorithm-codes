#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[100010];
int n,t;
int main()
{
    int  t;
    scanf("%d",&t);
    int x=0;
    while(t--){
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]),sum+=a[i];
    sort(a+1,a+n+1);
    int p=n-2;
    int k=n/3;
    while(k--){
        sum-=a[p];
        p-=3;
    }
    printf("Case #%d: %d\n",++x,sum);
    }
    return 0;
}


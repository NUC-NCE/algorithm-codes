#include<bits/stdc++.h>
#define rep(a,b,i) for(int i=a;i<=b;i++)
#define sx(x) scanf("%d",&x)
#define me(x,b) memset(x,b,sizeof(x));
using namespace std;
int t;
int n;
int a[100100];
int main()
{
    sx(t);
    rep(1,t,i)
    {
        me(a,0);
        sx(n);
        rep(1,n,j)
           sx(a[j]);
        int sum=0;
        int maxn=-1e7;
        int s=1,e=1,k=1;
        rep(1,n,j){
            sum+=a[j];
            if(sum>maxn){
                maxn=sum;
                e=j;
                s=k;
            }
            if(sum<0){
                sum=0;
                k=j+1;
            }
        }
        printf("Case %d:\n%d %d %d\n",i,maxn,s,e);
        if(i!=t)
            printf("\n");
    }
    return 0;
}

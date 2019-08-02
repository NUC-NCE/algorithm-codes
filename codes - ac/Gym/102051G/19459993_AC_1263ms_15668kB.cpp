#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,s;
const int maxn=2e6+100;
int a[maxn];
int sum[maxn];

int main()
{
    int n;
    cin>>n;
    int g=1e6+10;
    while(n--){
        int x[3],y[3];
        for(int i=0;i<3;i++) cin>>x[i]>>y[i];
        int minn=min(y[0],min(y[1],y[2]));
        int maxx=max(y[0],max(y[1],y[2]));
        a[g+minn]++;
        a[g+maxx+1]--;
    }
    int ans=0;
    sum[0]=0;
    for(int i=1;i<maxn;i++)
        sum[i]=sum[i-1]+a[i];
    sort(sum+1,sum+maxn);
    cout<<sum[maxn-1]<<endl;
    return 0;
}

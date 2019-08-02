#include<cstdio>
#include<utility>
#include<algorithm>
#include<cstring>
using namespace std;
const int MAX_N = 105;
int N,S[MAX_N],T[MAX_N];
pair<int, int> itv[MAX_N];
void solve()
{
    for(int i=0;i<N;i++)
    {
        itv[i].first=T[i];
        itv[i].second=S[i];
    }
    sort(itv,itv+N);
    int ans=0,t=0;
    for(int i=0;i<N;i++)
    {
        if(t<=itv[i].second)
        {
             ans++;
            t=itv[i].first;
        }
    }
    printf("%d\n",ans);
}
int main()
{
    while(~scanf("%d",&N))
    {
        memset(S,0,sizeof(S));
        memset(T,0,sizeof(T));
        if(N==0)
            break;
        int i;
        for(i=0;i<N;i++)
        {
            scanf("%d %d",&S[i],&T[i]);
        }
        solve();
    }
    return 0;
}
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<queue>
#include<vector>
#define INF 1e9
using namespace std;
const int maxn=5010;
int N,R;
struct edge
{
    int to,cost;
};
typedef pair<int ,int>P;
vector<edge> G[maxn];
int dist[maxn];
int dist2[maxn];
void solve()
{
    priority_queue<P, vector<P>, greater<P> > que;
    fill(dist,dist+N,INF);
    fill(dist2,dist2+N,INF);
    dist[0]=0;
    que.push(P(0,0));
    while(!que.empty())
    {
        P p=que.top();
        que.pop();
        int v=p.second,d=p.first;
        if(dist2[v]<d)
            continue;
        for(int i=0;i<G[v].size();i++)
        {
            edge e=G[v][i];
            int d2=d+e.cost;
            if(dist[e.to]>d2)
            {
                swap(dist[e.to],d2);
                que.push(P(dist[e.to],e.to));
            }
            if(dist2[e.to]>d2&&dist[e.to]<d2)
            {
                dist2[e.to]=d2;
                que.push(P(dist2[e.to],e.to));
            }
        }
    }
    printf("%d\n",dist2[N-1]);
}
int main()
{
    int from;
    while(~scanf("%d%d",&N,&R))
    {
        for(int i=0;i<R;i++)
        {
            edge now;
            scanf("%d%d%d",&from,&now.to,&now.cost);
            from--;
            now.to--;
            G[from].push_back(now);
            swap(now.to,from);
            G[from].push_back(now);
        }
        solve();
    }
    return 0;
}

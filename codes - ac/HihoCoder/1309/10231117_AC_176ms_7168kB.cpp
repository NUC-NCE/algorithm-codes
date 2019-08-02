#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
    ll x,y;
    bool operator<(const node& a)const
    {
        return x==a.x?y<a.y:x<a.x;
    }
}q[100010];
int cmp(const void*a,const void*b)
{
    return (((struct node *)a)->x>((struct node *)b)->x?1:-1);
}
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        for(int i=0;i<n;i++)
            scanf("%lld%lld",&q[i].x,&q[i].y);
        qsort(q,n,sizeof(q[0]),cmp);
        priority_queue<int>p;
        int maxn=0;
        for(int i=0;i<n;i++)
        {
            p.push(-q[i].y);
            while(q[i].x>=-p.top())
            {
                p.pop();
            }
            if(p.size()>maxn)
                maxn=p.size();
        }
        printf("%d\n",maxn);
    }
}
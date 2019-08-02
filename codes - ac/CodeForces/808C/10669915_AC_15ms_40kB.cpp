#include<bits/stdc++.h>
using namespace std;
const int maxn=3000;
struct Node
{   int u,v;
    int num;
};
int cmp1(Node a,Node b)
{  return a.u<b.u;
}
int cmp2(Node a,Node b)
{  return a.num<b.num;
}
int main()
{   
      int m;
      int w;
      Node v[maxn];
      scanf("%d%d",&m,&w);
      int sum=0;
      for(int i=0;i<m;i++)
      {  scanf("%d",&v[i].u);
         v[i].v=v[i].u/2+v[i].u%2;
         v[i].num=i;
          sum+=v[i].v;
      }
      if(sum>w)
      {
            printf("-1\n");return 0;
      }
      sort(v,v+m,cmp1);
      w-=sum;
      int t=m-1;
      while(w>0)
      {   
            if(v[t].u-v[t].v<w)
            {   w-=(v[t].u-v[t].v);
                v[t].v=v[t].u;
                t--;
            }
            else
                {v[t].v+=w;w=0;}
      }
      sort(v,v+m,cmp2);
      for(int x=0;x<=m-1;x++)
         cout<<v[x].v<<" ";
      return 0;
}
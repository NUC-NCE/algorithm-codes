#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<cstring>
#include<queue>
#include<set>
#include<map>
#include<math.h>
#define maxn 100010
using namespace std;
typedef long long ll;
const double PI = acos(-1.0);
const double eps = 1e-6;
struct P
{
	int x;
	int y;
	/*bool operator < (const P &a)const
	{
	    if(x!=a.x)
            return x>a.x;
        else
            return y>a.y;
	}
	bool operator == (const P &a)const{
        if(x==a.x&&y==a.y)
            return true;
        else
            return false;
	}*/
};
map<ll,int> mp;
double dis(P a,P b)
{
	return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
void slove(P a,P b,P c)
{
    double la=dis(b,c);
    double lb=dis(a,c);
    double lc=dis(a,b);
    if(la+lb<=lc+eps)
        return;
    if(lb+lc<=la+eps)
        return;
    if(la+lc<=lb+eps)
        return;
    double A=acos((lb*lb+lc*lc-la*la)/(2*lb*lc));
    double B=acos((la*la+lc*lc-lb*lb)/(2*la*lc));
    double C=acos((la*la+lb*lb-lc*lc)/(2*la*lb));
    if(A<eps||B<eps||C<eps)
        return;
    int t1=(int)(A*10000);
    int t2=(int)(B*10000);
    int t3=(int)(C*10000);
    if(t1>t2)swap(t1,t2);
    if(t1>t3)swap(t1,t3);
    if(t2>t3)swap(t2,t3);
    if(t1==0)return;
    ll ret=t1*1000000*1000000+t2*1000000+t3;
    mp[ret]++;
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        P p[50];
        int vis[210][210];
        memset(vis,0,sizeof(vis));
        int num=0;
        for(int i=0;i<n;i++)
        {
            int x,y;
            scanf("%d%d",&x,&y);
            if(!vis[x+100][y+100]){
                p[num].x=x;
                p[num].y=y;
                num++;
                vis[x+100][y+100]++;
            }
        }
        /*cout<<num<<endl;
        for(int i=0;i<num;i++)
            printf("%f  %f\n",p[i].x,p[i].y);*/
        for(int i=0;i<num;i++)
        {
            for(int j=i+1;j<num;j++)
            {
                for(int k=j+1;k<num;k++)
                {
                    slove(p[i],p[j],p[k]);
                }
            }
        }
        int ans=0;
        for(auto x: mp)
        {
            ans=max(x.second,ans);
        }
        //cout<<endl;
        printf("%d\n",ans);
        mp.clear();
    }
    return 0;
}

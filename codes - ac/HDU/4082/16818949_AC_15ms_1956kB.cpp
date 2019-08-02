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
#define eps 0
#define maxn 100010
using namespace std;
typedef long long ll;
const double PI = acos(-1.0);
const ll g=1000000;
struct P
{
	double x;
	double y;
	bool operator < (const P &a)const
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
	}
};
map<ll,int> mp;
double dis(P a,P b)
{
	return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
void slove(P aa,P bb,P cc)
{
    double A=dis(aa,bb);
    double B=dis(aa,cc);
    double C=dis(bb,cc);
    if(A+B<C+eps)
        return;
    if(A+C<B+eps)
        return;
    if(C+B<A+eps)
        return;
    double c=acos( (A*A+B*B-C*C)/(2*A*B) );
    double b=acos( (A*A+C*C-B*B)/(2*A*C) );
    double a=acos( (B*B+C*C-A*A)/(2*B*C) );
    if(a<eps||b<eps||c<eps)
    	return ;
    int t1=(int)(a*10000);
    int t2=(int)(b*10000);
    int t3=(int)(c*10000);
    if(t1>t2)
    	swap(t1,t2);
    if(t1>t3)
    	swap(t1,t3);
    if(t2>t3)
    	swap(t2,t3);
    if(t1==0)
        return ;
    ll gg=g*g*t1+g*t2+t3;
    mp[gg]++;
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        P p[20];
        int vis[210][210];
        memset(vis,0,sizeof(vis));
        int num=0;
        for(int i=0;i<n;i++)
        {
            int x,y;
            scanf("%d%d",&x,&y);
            if(!vis[x+100][y+100]){
                p[num].x=(double)x;
                p[num].y=(double)y;
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
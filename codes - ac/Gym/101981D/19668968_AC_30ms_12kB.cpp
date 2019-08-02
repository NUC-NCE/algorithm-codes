#include <iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
const double eps=1e-8;
struct point3D
{
    double x,y,z;
} datas[105];
int n;
double dis(point3D a,point3D b)
{
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)+(a.z-b.z)*(a.z-b.z));
}
double solve()
{
    double step=10000,ans=1e30,mt;
    point3D z;
    z.x=z.y=z.z=0;
    int s=0;
    while(step>eps)
    {
        for(int i=0; i<n; i++)
            if(dis(z,datas[s])<dis(z,datas[i]))
                s=i;
        mt=dis(z,datas[s]);
        ans=min(mt,ans);
        z.x+=(datas[s].x-z.x)/mt*step;
        z.y+=(datas[s].y-z.y)/mt*step;
        z.z+=(datas[s].z-z.z)/mt*step;
        step*=0.98;
    }
    return ans;
}
int main()
{
    double ans;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0; i<n; i++)
            scanf("%lf%lf%lf",&datas[i].x,&datas[i].y,&datas[i].z);
        ans=solve();
        printf("%.7f\n",ans);
    }
    return 0;
}

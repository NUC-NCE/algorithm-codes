#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=200;
struct Node{
	double x,y,z;
}p[maxn];
Node ans;
double avex,avey,avez;
const double eps=1e-7;
int N;
double dis(Node a,Node b){
	return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)+(a.z-b.z)*(a.z-b.z));
}
double minn(double a,double b)
{
    return a<=b?a:b;
}
void SA(){
	double T=20000;
	double ret=1e30;
	while(T>eps){
		int id=1;
		double max_dis=dis(ans,p[1]);
		for(int i=2;i<=N;i++){
			double tem=dis(ans,p[i]);
			if(tem>max_dis){
				max_dis=tem;
				id=i;
			}
		}
		ret=minn(max_dis,ret);
		ans.x+=(p[id].x-ans.x)*T/max_dis;
		ans.y+=(p[id].y-ans.y)/max_dis*T;
		ans.z+=(p[id].z-ans.z)/max_dis*T;
		T*=0.989;
	}
	printf("%.15f\n",ret);
}
int main()
{
	scanf("%d",&N);
	for(int i=1;i<=N;i++){
		scanf("%lf%lf%lf",&p[i].x,&p[i].y,&p[i].z);
		avex+=p[i].x;avey+=p[i].y;avez+=p[i].z;
	}
	avex/=N;avey/=N;avez/=N;
	ans.x=avex;ans.y=avey;ans.z=avez;
	SA();
	return 0;
}
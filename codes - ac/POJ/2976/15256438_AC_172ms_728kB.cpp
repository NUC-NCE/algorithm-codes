#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
const double INF=0x3f3f3f3f;
const double eps=1e-9;
int k,n,k1;
double a[30005],b[30005];
double c[30005];
bool C(double x){
	
	for(int i=0;i<n;i++)
		c[i]=a[i]-x*b[i];
	sort(c,c+n);
	double sum=0.0;
	for(int i=n-1;i>=k;i--)	
		sum+=c[i];
	return sum>=0;
}

int main(){
	while(scanf("%d%d",&n,&k)!=EOF&&(k||n)){
		for(int i=0;i<n;i++)
			scanf("%lf",&a[i]);
		for(int i=0;i<n;i++)
			scanf("%lf",&b[i]);
		double lb=0,ub=INF;
		while(ub-lb>eps){
			double mid=(lb+ub)/2.00;
			C(mid)?lb=mid:ub=mid;
		}
		int ans=(int)(ub*100+0.5);
		printf("%d\n",ans);
	}
	return 0;
}

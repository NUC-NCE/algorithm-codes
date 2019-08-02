#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

const double eps=1e-9;
int k,n,k1;
double a[1005],b[1005];

bool C(double x){
	double c[1005],sum=0.0;
	for(int i=0;i<n;i++)
		c[i]=a[i]-x*b[i];
	sort(c,c+n);
	for(int i=0;i<k1;i++)	
		sum+=c[n-1-i];
	return sum>=0;
}

int main(){
	while(scanf("%d%d",&n,&k)!=EOF&&(k||n)){
		k1=n-k;
		for(int i=0;i<n;i++)
			scanf("%lf",&a[i]);
		for(int i=0;i<n;i++)
			scanf("%lf",&b[i]);
		double lb=0,ub=1;
		while(ub-lb>eps){
			double mid=(lb+ub)/2;
			C(mid)?lb=mid:ub=mid;
		}
		printf("%d\n",(int)(ub*100+0.5));
	}
	return 0;
}
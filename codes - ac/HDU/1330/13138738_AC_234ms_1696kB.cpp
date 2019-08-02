#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	puts("# Cards  Overhang");
	double a=0.5;
	while(~scanf("%d",&n)){
		double ans = 0;
		for(int i=1;i<=n;i++)
			ans = ans+(1.0)/(2*i);
		printf("%5d\%10.3f\n",n,ans);
	}
	return 0;
}

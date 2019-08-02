#include<bits/stdc++.h>
using namespace std;
int main()
{
	printf("n e\n- -----------\n");
	double sum=0.0;
	double k=1.0;
	for(int i=0;i<10;i++){
		sum+=1/k;
		k*=(i+1);
		if(i<=2)
			printf("%d %g\n",i,sum);
		else
			printf("%d %.9f\n",i,sum);
	}
return 0;
}
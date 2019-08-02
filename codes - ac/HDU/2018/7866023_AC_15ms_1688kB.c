#include<stdio.h>
int i=1;
int s[100]={0,0,0,1};
int niu(int n)
{
    if(i<n) 
	{
    	s[3]=s[3]+s[2];
    	s[2]=s[1];
    	s[1]=s[0];
    	s[0]=s[3];
    	i++;
    	return niu(n);
	}
	else
	{
		int sum=s[0]+s[1]+s[2]+s[3];
		return sum;
	}
}
int main()
{
	int n,s[100],i,sum;
 	while(scanf("%d",&n)!=EOF)
 	{
 		if(n==0) break;
		int p=niu(n);
   		printf("%d\n",p);
 	}
 	return 0;
}
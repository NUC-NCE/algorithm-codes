#include<stdio.h>
char s[200005];
int main()
{
	int n;
	while(~scanf("%d %s",&n,s))
	{
		int m=0;
		int t=0;
		int q=n-1;
		while(s[t]=='<')
		{
			t++;
		}
		while(s[q]=='>')
		{
			q--;
		}
		printf("%d\n",t+n-1-q);
	}
	return 0;
 }
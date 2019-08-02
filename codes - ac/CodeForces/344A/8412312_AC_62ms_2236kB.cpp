#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
char s[100003][2];
int main()
{
	int n,i=0,c=1;
	cin>>n;
	n--;
	memset(s,0,sizeof(s));
	scanf("%s",s[i]);
	while(n--)
	{
		scanf("%s",s[i+1]);
		if(s[i+1][0]!=s[i][0])
			c++;
		i++;
	}
	cout<<c<<endl;
	return 0;
}
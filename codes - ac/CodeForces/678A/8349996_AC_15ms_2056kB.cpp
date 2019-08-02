#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int c=a/b;
	int d=(c+1)*b;
	printf("%d\n",d);
	return 0;
}
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		if(n%2==0&&n!=2)
			printf("YES\n");
		else 
			printf("NO\n");
	}
	return 0;
}
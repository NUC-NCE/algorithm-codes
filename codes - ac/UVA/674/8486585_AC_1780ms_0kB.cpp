#include<iostream>
#include<string.h>
using namespace std;
int a[15000]={0};
int b[5]={1,5,10,25,50};
int main()
{
	int n,i,j;
	while(cin>>n)
	{
		memset(a,0,sizeof(a));
		a[0]=1;
		for(i=0;i<5;i++)
		{
			for(j=0;j<=n-b[i];j++)
			{
				if(a[j])
					a[j+b[i]]+=a[j];
			}
		}
		cout<<a[n]<<endl;
	}
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	long long n,m,a;
	cin>>n>>m>>a;
	long long c,d;
	if(n%a==0)
		c=n/a;
	else
		c=n/a+1;
	if(m%a==0)
		d=m/a;
	else
		d=m/a+1;
	cout<<c*d<<endl;
	return 0;
}
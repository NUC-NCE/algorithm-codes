#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int a[100005];
int s[20];
int find(int x)
{
    int p;
    int flag=0;
    memset(s,0,sizeof(s));
    while(x!=0)
    {
        p=x%10;
        if(s[p])
        {
            flag=1;
            return 0;
        }
        else
            s[p]++;
        x/=10;
    }
    if(flag==0)
        return 1;
}

void get_a()
{
    a[0]=0;
    for(int i=1;i<100005;i++)
    {
        if(find(i))
            a[i]=a[i-1]+1;
        else
            a[i]=a[i-1];
    }
}
int main()
{
	int n;
	int c,b;
	get_a();
	cin>>n;
	while(n--)
    {
        cin>>c>>b;
        cout<<a[b]-a[c-1]<<endl;
    }
    return 0;
}

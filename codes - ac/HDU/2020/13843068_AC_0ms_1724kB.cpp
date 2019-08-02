#include<bits/stdc++.h>
using namespace std;
int a[11000];
int n;
bool cmp(int a,int b)
{
return abs(a)>abs(b);
}
int main()
{
while(scanf("%d",&n)!=EOF&&n)
{
for(int i=0;i<n;i++)
cin>>a[i];
sort(a,a+n,cmp);
for(int i=0;i<n;i++)
printf("%d%c",a[i],i==n-1?'\n':' ');
}
}
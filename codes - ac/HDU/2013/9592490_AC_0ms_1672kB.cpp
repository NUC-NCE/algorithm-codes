#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int a[33];
int n;
void get_a()
{
    int k=1;
    a[1]=1;
    a[2]=4;
    a[3]=10;
    a[4]=22;
    for(int i=5;i<33;i++)
        a[i]=2*a[i-1]+2;
}
int main()
{
    get_a();
    while(~scanf("%d",&n)&&n)
    {
        printf("%d\n",a[n]);
    }
    return 0;
}

#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int p,q;
int gcd(int x,int y)
{
    if(y==0)
        return x;
    return gcd(y,x%y);
}

int main()
{
    while(~scanf("%d%d",&p,&q))
    {
        printf("%d\n",p+q-gcd(p,q));
    }
    return 0;
}

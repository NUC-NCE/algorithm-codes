#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int x,y;
    while(~scanf("%d %d",&x,&y))
    {
        int p=max(x,y);
        int w=6-p+1;
        int k=gcd(w,6);
        printf("%d/%d\n",w/k,6/k);
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int a,b,n;
int z[50];
int main()
{
    while(~scanf("%d%d%d",&a,&b,&n)&&a&&b&&n)
    {
        z[1]=1;
        z[2]=1;
        for(int i=3;i<=48;i++)
        {
            z[i]=(z[i-1]*a%7+z[i-2]*b%7)%7;
        }
        z[0]=z[48];
        printf("%d\n",z[n%48]);
    }
    return 0;
}

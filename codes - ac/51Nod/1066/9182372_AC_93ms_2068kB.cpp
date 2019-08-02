#include <iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int t,n,k;
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        if(n%(k+1)==0)
            printf("B\n");
        else
            printf("A\n");
    }
    return 0;
}
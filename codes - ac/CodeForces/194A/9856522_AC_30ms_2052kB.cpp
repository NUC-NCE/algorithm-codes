#include<bits/stdc++.h>
using namespace std;
int n,k;
int main()
{
    scanf("%d%d",&n,&k);
    if(3*n<=k)
        printf("0");
    else
        printf("%d\n",3*n-k);
    return 0;
}
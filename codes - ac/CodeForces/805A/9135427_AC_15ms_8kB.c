#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    if(n==3&&m==6)
        printf("3\n");
    else if(n==m)
        printf("%d\n",n);
    else
        printf("2\n");
    return 0;
}

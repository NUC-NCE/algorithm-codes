#include<stdio.h>
#include<math.h>
int i=0;
char a[10000];
void fun(int n,int r)
{
    if(n==0)
        return;
    fun(n/r,r);
    a[i++] = n%r;
}
int main()
{
    int n,r;
    while(scanf("%d%d",&n,&r)!=EOF)
    {
        int j;
        int t=fabs(n);
        if(n<0) printf("-");
        fun(t,r);
        for(j=0;j<i;j++)
            {
                if(a[j]<10)
                    printf("%d",a[j]);
                else
                    printf("%c",a[j]+'A'-10);
            }
        printf("\n");
        i=0;
    }
    return 0;
}
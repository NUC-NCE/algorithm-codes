#include <stdio.h>
int jisuan(int a, int b)
{
    if(a==0 || a==1 || a==5 || a==6)
        return a;
    if(a==2)
    {
        if(b%4==1) return 2;
        if(b%4==2) return 4;
        if(b%4==3) return 8;
        if(b%4==0) return 6;
    }
    if(a==3)
    {
        if(b%4==1) return 3;
        if(b%4==2) return 9;
        if(b%4==3) return 7;
        if(b%4==0) return 1;
    }
    if(a==4)
    {
        if(b%2==1) return 4;
        if(b%2==0) return 6;
    }
    if(a==7)
    {
        if(b%4==1) return 7;
        if(b%4==2) return 9;
        if(b%4==3) return 3;
        if(b%4==0) return 1;
    }
    if(a==8)
    {
        if(b%4==1) return 8;
        if(b%4==2) return 4;
        if(b%4==3) return 2;
        if(b%4==0) return 6;
    }
    if(a==9)
    {
        if(b%2==1) return 9;
        if(b%2==0) return 1;
    }
}

int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a>10)
        {
            while(a>10)
            {
                a=a%10;
            }
        }
    printf("%d\n",jisuan(a,b));
    }
 return 0;
}
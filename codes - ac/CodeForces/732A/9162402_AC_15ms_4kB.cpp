#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int i=1;
    while(a>10)
    {
        a=a%10;
    }
    int k=1;
    for(;;i++)
    {
        k=a*i;
        if(k>=10)
            k=k%10;
        if(k==0||k==b)
        {
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}

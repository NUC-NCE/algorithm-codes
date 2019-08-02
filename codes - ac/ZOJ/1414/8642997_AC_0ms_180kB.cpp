#include<cstdio>
#include<cstring>
using namespace std;
int n;
int main()
{
    scanf("%d",&n);
    while(n--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a%2==0&&b%2==0)
            printf("%d\n",a+b);
        else if(a%2!=0&&b%2!=0)
            printf("%d\n",a+b-1);
        else
            printf("No Number\n");
    }
    return 0;
}
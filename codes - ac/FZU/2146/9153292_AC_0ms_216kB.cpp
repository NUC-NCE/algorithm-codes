#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int n;
char a[10090];
int main()
{
    scanf("%d",&n);
    int i=1;
    while(n--)
    {
        scanf("%s",a);
        if(strlen(a)%2==0)
            printf("Case %d: Even\n",i);
        if(strlen(a)%2!=0)
            printf("Case %d: Odd\n",i);
        i++;
    }
    return 0;
}

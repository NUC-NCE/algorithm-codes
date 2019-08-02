#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cstdlib>
#include<cmath>
using namespace std;
char ch[10005];
int main()
{
    int i=1;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",ch);
        if(strlen(ch)%2==0)
            printf("Case %d: Even\n",i);
        else
            printf("Case %d: Odd\n",i);
        i++;
    }
    return 0;
}

#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int m=n;
    int i=0;
    while(m>=10)
    {
        m=m/10;
        i++;
    }
    m=m+1;
    while(i--)
    {
        m*=10;
    }
    printf("%d\n",m-n);
    return 0;
}
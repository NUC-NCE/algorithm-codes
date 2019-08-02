#include<cstdio>
using namespace std;
int main()
{
	int s[200];
    int a,b;
    int i=0;
    while(~scanf("%d %d",&a,&b))
    {
        if(a==0&&b==0)
            break;
        s[i]=a+b;
        i++;
    }
    for(int j=0;j<i;j++)
        printf("%d\n",s[j]);
    return 0;
}

#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdlib>
using namespace std;
int n;
char a[3];
int cmp(const void *a,const void*b)
{
return(*(char *)a-*(char*)b);
}
int main()
{
    while(~scanf("%s",&a))
    {
        qsort(a,3,sizeof(a[0]),cmp);
        for(int i=0;i<3;i++)
        {
            printf("%c",a[i]);
            if(i!=2)
                printf(" ");
        }
        printf("\n");
        memset(a,0,sizeof(a));
    }
    return 0;
}

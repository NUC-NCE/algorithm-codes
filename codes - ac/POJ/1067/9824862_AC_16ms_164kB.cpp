#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int a,b;
    double k = (sqrt(5.0)+1.0)/2.0;
    while(~scanf("%d%d",&a,&b))
    {
        if(a>b)
            swap(a,b);
        int j = (b-a)*k;
        if(a == j)
            printf("0\n");
        else
            printf("1\n");
    }
    return 0;
}

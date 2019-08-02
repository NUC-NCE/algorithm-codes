#include<cstdio>
#include<algorithm>
using namespace std;
char str[4]={'b','b','a','a'};
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        printf("%c",str[i%4]);
    return 0;
}

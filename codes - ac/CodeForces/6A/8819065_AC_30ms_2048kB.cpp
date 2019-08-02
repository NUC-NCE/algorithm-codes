#include<cstdio>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
    int a[4];
    for(int i=0;i<4;i++)
        cin>>a[i];
    int flag=0;
    sort(a,a+4);
    if((a[0]+a[1])<a[2]&&a[0]+a[2]<a[3]&&a[1]+a[2]<a[3])
        printf("IMPOSSIBLE");
    else if(a[0]+a[1]>a[2]||a[0]+a[2]>a[3]||a[1]+a[2]>a[3])
        printf("TRIANGLE");
    else
        printf("SEGMENT");
    return 0;
}

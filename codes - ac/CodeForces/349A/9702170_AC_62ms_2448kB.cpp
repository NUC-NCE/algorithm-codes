#include<bits/stdc++.h>
using namespace std;
int n;
int a[100010];
int a25,a50,a100;
int main()
{
    scanf("%d",&n);
    a25=0;
    a50=0;
    a100=0;
    int flag=1;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a25<0)
            continue;
        if(a[i]==25)
            a25++;
        else if(a[i]==50)
        {
            a50++;
            a25--;
        }
        else if(a[i]==100)
        {
            a100++;
            if(a50>0)
            {
                a50--;
                a25--;
            }
            else if(a50==0)
            {
                a25=a25-3;
            }
        }
    }
    if(a25>=0)
        printf("YES");
    if(a25<0)
        printf("NO");
    return 0;
}

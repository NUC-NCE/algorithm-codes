#include<cstdio>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
int a[105];
char str[105];
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        memset(a,0,sizeof(a));
        memset(str,0,sizeof(str));
        scanf("%s",str);
        getchar();
        int p,i;
        int q=strlen(str);
        int j=0;
        for(i=0;i<=q;i++)
        {
            if(str[i]==str[i+1])
                a[j]++;
            else
            {
                if(a[j]==0)
                    cout<<str[i];
                if(a[j]>=1)
                {
                    cout<<a[j]+1<<str[i];
                }
                j++;
            }
        }
        cout<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
char s[1005];
char t[1005];
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    scanf("%s %s",s,t);
    int q=-1, minn=n+1;
    for(int i=0;i<m-n+1;i++)
    {
        int p=0;
        for(int j=0;j<n;j++)
        {
            if(s[j]!=t[i+j])
                p++;
        }
        if(p<minn)
        {
            minn=p;
            q=i;
        }
    }
    printf("%d\n",minn);
    int p=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=t[q+i])
        {
            printf("%d",i+1);
            p++;
            p==minn?printf("\n"):printf(" ");
        }
    }
    return 0;
}
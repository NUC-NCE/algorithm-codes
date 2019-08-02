#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string.h>
using namespace std;
int next[1000005],len;
char str[1000001];
void KMP()
{
    int i=0,j=-1;
    next[0]=-1;
    len=strlen(str);
    while(i<len)
    {
        if(j==-1||str[i]==str[j])
        {
            i++; j++;
            next[i]=j;
        }
        else
        j=next[j];
    }
}
int main()
{
    int ans;
    while(~scanf("%s",str)&&str[0]!='.')
    {
        KMP();
        if(len%(len-next[len])==0)
        ans=len/(len-next[len]);
        else
        ans=1;
        printf("%d\n",ans);
        memset(str,0,sizeof(str));
    }
}

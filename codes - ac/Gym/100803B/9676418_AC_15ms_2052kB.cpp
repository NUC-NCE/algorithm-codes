#include<bits/stdc++.h>
using namespace std;
char a[100];
int b[100];
int n,m,ans,i,j,len;
int sum1,sum2;
int main()
{
    scanf("%s%d",a,&ans);
    sum1=sum2=0;
    len=strlen(a);
    memset(b,0,sizeof(b));
    for(i=0;i<len;i++)
    {
        if(a[i]=='+'||a[i]=='*')
            continue;
        b[i]=a[i]-'0';
    }
    for(i=0;i<len;i++)
    {
        if(a[i]=='*')
        {
            b[i+1]=b[i-1]*b[i+1]; b[i-1]=0;
        }
    }
    sum1=0;
    for(i=0;i<len;i++)
    {
        sum1+=b[i];
    }
    sum2=a[0]-'0';
    for(i=1;i<len;i++)
    {
            if(a[i]=='+')
            {
                sum2+=a[i+1]-'0';
            }
            else if(a[i]=='*')
            {
                sum2*=a[i+1]-'0';
            }
    }
    if(sum1==ans&&sum2==ans)
        printf("U\n");
    else if(sum1==ans)
        printf("M\n");
    else if(sum2==ans)
        printf("L\n");
    else
        printf("I\n");
    return 0;
}
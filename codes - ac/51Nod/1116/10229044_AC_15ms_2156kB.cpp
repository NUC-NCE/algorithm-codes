#include<bits/stdc++.h>
using namespace std;
char s[100100];
int chaxun(char num)
{
    if('0'<=num&&num<='9')
        return num-'0';
    return num-'A'+10;
}
int main()
{
    int num,maxn=0;
    while(~scanf("%s",s))
    {
        num=0;
        int len=strlen(s);
        for(int i=0;i<len;i++)
        {
            num+=chaxun(s[i]);
            maxn=max(maxn,chaxun(s[i]));
        }
        for(int i=maxn;i<36;++i)
        {
            if(num%i==0)
            {
                printf("%d\n",i+1);
                return 0;
            }
        }
        printf("No Solution\n");
    }
    return 0;
}
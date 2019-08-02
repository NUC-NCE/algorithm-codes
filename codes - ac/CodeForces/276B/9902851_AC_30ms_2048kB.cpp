#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
using namespace std;
char s[1005];
int b[26];
int main()
{
    memset(b,0,sizeof(b));
    scanf("%s",s);
    int len=strlen(s);
    for(int i=0;s[i];i++)
    {
        b[s[i]-97]++;
    }
    int p=0;
    for(int i=0;i<26;i++)
    {
        b[i]%=2;
        if(b[i])
            p++;
    }
    if(p%2||p==0)
        printf("First");
    else
        printf("Second");
    return 0;
}

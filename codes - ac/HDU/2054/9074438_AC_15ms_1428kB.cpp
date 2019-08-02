#include<cstdio>
#include<cstring>
using namespace std;
char *change(char *s)
{
    int len=strlen(s);
    if(strchr(s,'.')!=NULL)
    {
        while(s[--len]=='0');
          if(s[len]=='.') 
            len--;
        s[len+1]='\0'; 
    }
    return s;
}
int main()
{
    char s1[14000],s2[14000];
    while(~scanf("%s %s",s1,s2))
    {
        if(!strcmp(change(s1),change(s2))) 
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
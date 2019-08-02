#include <stdio.h>
#include <stdlib.h>
int main()
{
     int a[10]={0};
     char b[1010];
     char s[1010];
     scanf("%s",&s);
     int i,p=0;
     for(i=0;s[i]!='\0';i++)
         a[s[i]-'0']++;
     for(i=0;i<10;i++)
     {
         while(a[i])
         {
             a[i]--;
             b[p++]=i+'0';
         }
     }
     b[p++]='\0';
     printf("%s",b);
     return 0;
}
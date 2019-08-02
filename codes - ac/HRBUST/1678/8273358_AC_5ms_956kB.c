#include<stdio.h>
#include<string.h>
int main()
{
    char str[100005];
    while(scanf("%s",str)!=EOF)
    {
        int i=0;
        int j;
        int p=strlen(str);
        while(str[i]-'1'==0&&i<p-1)
        {
            printf("%c",str[i]);
            i++;
        }
        if(str[i]-'0'==0)
            for(j=i+1;j<p;j++)
                printf("%c",str[j]);
        printf("\n");
    }
    return 0;
}
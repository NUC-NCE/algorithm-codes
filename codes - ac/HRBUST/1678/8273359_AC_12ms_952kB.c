#include<stdio.h>
#include<string.h>
int main()
{
    char str[100005];
    while(scanf("%s",str)!=EOF)
    {
        int i,j;
        int p=strlen(str);
        for(i=0;i<p-1;i++)
        {
            if(str[i]-'1'==0)
                printf("%c",str[i]);
            else if(str[i]-'0'==0)
            {
                for(j=i+1;j<p;j++)
                    printf("%c",str[j]);
                break;
            }
        }
        printf("\n");
    }
    return 0;
}
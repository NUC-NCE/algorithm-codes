#include<stdio.h>
#include<string.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++)
    {
        char s[205];
        int j,k=0;
        int p=0;
        gets(s);
        for(j=0;j<strlen(s);j++)
        {
            if(s[j]==' ')
               p=0;
            else if(p==0)
            {
                p=1;
                k++;
            }
    	}
    printf("%d\n",k);
    }
    return 0;
}
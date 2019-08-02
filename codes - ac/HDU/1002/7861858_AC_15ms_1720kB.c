#include<stdio.h>  
#include<string.h>
#include<stdlib.h>
int main()  
{  
	char a[3001],b[3001];
    int p,n,numa[3001],numb[3001];
    scanf("%d",&n);
    for(p=0;p<n;p++)
    {
        scanf("%s %s",&a,&b);
        int i,j,la,lb;
        memset(numa,0,sizeof(numa));  
	    memset(numb,0,sizeof(numb));

        la=strlen(a);
        lb=strlen(b);
        for(j=0,i=la-1;i>=0;i--) 
			numa[j++]=a[i]-'0';
        for(j=0,i=lb-1;i>=0;i--) 
			numb[j++]=b[i]-'0';
        for(i=0;i<3000;i++)
        {
            numa[i]+=numb[i];  
            if(numa[i]>=10) 
            {
                numa[i]-=10;
                numa[i+1]++;
            }
        }
        for(i=3000;((i>=0)&&numa[i]==0);i--);
        if(i>=0)
        {
            printf("Case %d:\n",p+1);
            printf("%s + %s = ",a,b);
            for(;i>=0;i--)
            {
                int q;
                printf("%d",numa[i]);
                if(i==0&&p!=n-1) 
					printf("\n"); 
            }  
			printf("\n");  
		}
    }  
    return 0;  
} 
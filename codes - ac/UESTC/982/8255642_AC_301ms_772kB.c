#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		printf("%d=",n);  
        int i=2;  
        int flag=0; 
       	while(i*i<=n)  
        {  
           while(n%i==0)
            {
                if(flag==0)
                    printf("%d",i);  
                else
                    printf("*%d",i);
                n=n/i;
                flag=1;
           }
            i++;
        }
        if(n!=1&&flag==0)  
        {
            printf("%d",n);  
        }
        if(n!=1&&flag==1)  
        {  
            printf("*%d",n);
        }  
        printf("\n");
    }   
    return 0;  
 }
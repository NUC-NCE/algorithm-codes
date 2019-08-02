# include<stdio.h>
# include<math.h>
int main() 
{
    int n;
    int a[100];
    while(~scanf("%d",&n))
    {
        if(n==0) break;
        int i,j;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            for(j=0;j+i<n-1;j++)
            {
            int t;
            if(fabs(a[j])<fabs(a[j+1]))
            {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
            }
            } 
        }
        for(i=0;i<n;i++)
        {
            printf("%d",a[i]);
            if(i!=n-1) printf(" ");
        }
        printf("\n");     
    }
    return 0;
}
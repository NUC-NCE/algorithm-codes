#include<cstdio>  
#include<cstring>  
using namespace std;  
int a[25];  
int n,k,flag;  
void Dfs(int p,int sum)  
{  
    if(sum==k)
        flag=1;
    if(p==n)
        return ;  
    if(flag==1)
        return;
    Dfs(p+1,sum+a[p]);  
    Dfs(p+1,sum);  
} 
int main()  
{  
    while(~scanf("%d%d",&n,&k))  
    {  
        memset(a,0,sizeof(a));
        flag=0;
        for(int i=0;i<n;i++)  
            scanf("%d",&a[i]);  
        Dfs(0,0);
        if(flag==1)
            printf("Yes\n");  
        else
            printf("No\n");  
    }  
}
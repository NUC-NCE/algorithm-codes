#include<iostream> 
using namespace std;  
int main()  
{  
    long long n,ans,i,k,sum;    
    while(~scanf("%lld",&n))  
    {  
        ans=1;  
        for(i=2;i*i<=n;i++)  
        {  
           sum=0;  
            k=1;  
            while(n%i==0)  
            {  
                n=n/i;  
                sum++;  
                k=k*i;  
            }  
            ans*=sum*(k-k/i)+k;  
        }  
        if(n!=1) ans*=2*n-1;     
        printf("%lld\n",ans);  
    }  
      
    return 0;  
}  

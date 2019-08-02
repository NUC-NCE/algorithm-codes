#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

const int MAX_N=400010;
char str[MAX_N];
int next[MAX_N];
int num[MAX_N];
int n;
void kmp()
{
    int j,k;
    j=0;
    k=-1;
    next[0]=-1;
    while(j<n)
    {
        if(k==-1||str[j]==str[k])
        {
            j++;
            k++;
            next[j]=k;
        }
        else 
			k=next[k];
    }
}
int main()
{
    int i;
    while(~scanf("%s",&str))
    {
    	n=strlen(str);
    	int p=0;
        kmp();
        for(i=n;i!=0;)
    	{
    		num[p++]=next[i];
    		i=next[i];
		}
		for(i=p-2;i>=0;i--)
		{
			printf("%d ",num[i]);
		}
		printf("%d\n",n);
    }
    return 0;
}

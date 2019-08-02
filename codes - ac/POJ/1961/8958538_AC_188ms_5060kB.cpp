#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

const int MAXN=1000010;
char str[MAXN];
int next[MAXN];
int n;
void kmp()
{
    int j,k;
    j=0;
    k=-1;
    next[0]=-1;
    while(str[j]!='\0')
    {
        if(k==-1||str[j]==str[k])
        {
            j++;
            k++;
            if(j%(j-k)==0)
            	if(j/(j-k)>1)
              		printf("%d %d\n",j,j/(j-k));
            next[j]=k;
        }
        else k=next[k];
    }
}
int main()
{
    int i=0;
    while(~scanf("%d",&n))
    {
    	if(!n)
    		break;
        i++;
        scanf("%s",&str);
        printf("Test case #%d\n",i);
        kmp();
        printf("\n");
    }
    return 0;
}

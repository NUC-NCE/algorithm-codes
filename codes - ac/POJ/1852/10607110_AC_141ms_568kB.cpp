#include<cstdio>
#include<algorithm>
using namespace std;
int t,l,n;
int x[100010];
void solve()
{
    int mint=0;
    for(int i=0;i<n;i++)
    {
        mint=max(mint,min(x[i],l-x[i]));
    }
    int maxt=0;
    for(int i=0;i<n;i++)
    {
        maxt=max(maxt,max(x[i],l-x[i]));
    }
    printf("%d %d\n",mint,maxt);
}
int main()
{
 scanf("%d",&t);
 while(t--)
 {
     scanf("%d%d",&l,&n);
     for(int i=0;i<n;i++)
        scanf("%d",&x[i]);
     solve();
 }
 return 0;

}

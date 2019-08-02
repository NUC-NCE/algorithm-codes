#include<iostream>
#include<cstring>
using namespace std;
int v[5]={1,5,10,25,50};
int dp[8000][6];
int i,j,k;
int n;
void get()
{
        for(i=0;i<=8000;i++)
            dp[i][0]=1;
        for(i=0;i<5;i++)
            dp[0][i]=1;
        for(i=1;i<5;i++)
        {
            int sum=0;
            for(j=1;j<=8000;j=j+5)
            {
                for(k=0;k*v[i]<=j;k++)
                {
                    dp[j][i]+=dp[j-k*v[i]][i-1];
                }
            }
        }
}
int main()
{
    memset(dp,0,sizeof(dp));
    get();
    while(cin>>n)
    {

		cout<<dp[n/5*5+1][4]<<endl;
	}
	return 0;
}
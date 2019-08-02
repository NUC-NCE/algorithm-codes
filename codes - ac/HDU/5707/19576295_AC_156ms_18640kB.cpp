#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int dp[2100][2100];
char a[2100];
char b[2100];
char c[2100];
int main()
{
    int t;
    while(scanf("%s%s%s",a+1,b+1,c+1)!=EOF){

        memset(dp,0,sizeof(dp));
        int l1=strlen(a+1);
        int l2=strlen(b+1);
        int l3=strlen(c+1);
        if((l1+l2)!=l3)
        {
            puts("No");
            continue;
        }
        dp[0][0]=1;
        for(int i=0;i<=l1;i++)
        {
            for(int j=0;j<=l2;j++)
            {
                if(i>0&&a[i]==c[i+j])
                    dp[i][j]|=dp[i-1][j];
                if(j>0&&b[j]==c[i+j])
                    dp[i][j]|=dp[i][j-1];
                //cout<<i<<"--"<<j<<" :"<<dp[i][j]<<endl;
            }

        }

        if(dp[l1][l2])
            puts("Yes");
        else
            puts("No");
    }
//    int n,m,k;
//    cin>>n>>m>>k;
//    sg[1][1]=0;
//    for(int i=2;i<=m;i+=2){
//        sg[i+1][1]=0;
//        sg[1][i+1]=0;
//        sg[i][1]=1;
//        sg[1][i]=1;
//    }
//    for(int i=2;i<=n;i++){
//        for(int j=2;j<=m;j++){
//            if(!sg[i-1][j]||!sg[i][j-1]||(i>k&&j>k&&!sg[i-k][j-k]))
//            {
//                sg[i][j]=1;
//                continue;
//            }
//            else
//                sg[i][j]=0;
//        }
//    }
//    for(int i=1;i<=n;i++)
//    {
//        for(int j=1;j<=m;j++)
//            printf("%c  ",sg[i][j]==1?'N':'P');
//        cout<<endl;
//    }
    return 0;
}
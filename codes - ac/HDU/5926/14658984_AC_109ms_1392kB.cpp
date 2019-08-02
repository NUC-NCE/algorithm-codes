#include<bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;
ll n;
ll sum;
int maps[40][40];
int main()
{
    int t;
    while(scanf("%d",&t)!=EOF)
    {
        ll T=0;
        int cas=1;
        while(t--)
        {
            int flag=0;
            int n,m;
            scanf("%d%d",&n,&m);
            for(int i=0;i<n;i++)
                for(int j=0;j<m;j++)
                    scanf("%d",&maps[i][j]);
            map<int ,int>mp1;
            map<int ,int>mp2;
            map<int ,int>mp3;
            map<int ,int>mp4;
            for(int i=0;i<m&&!flag;i++)
            {
                mp1[maps[0][i]]++;
                if(mp1[maps[0][i]]==2)
                {
                    flag=1;
                    break;
                }
            }
            for(int i=0;i<m&&!flag;i++)
            {
                mp2[maps[n-1][i]]++;
                if(mp2[maps[n-1][i]]==2)
                {
                    flag=1;
                    break;
                }
            }
            for(int i=0;i<n&&!flag;i++)
            {
                mp3[maps[i][0]]++;
                if(mp3[maps[i][0]]==2)
                {
                    flag=1;
                    break;
                }
            }
            for(int i=0;i<n&&!flag;i++)
            {
                mp4[maps[i][m-1]]++;
                if(mp4[maps[i][m-1]]==2)
                {
                    flag=1;
                    break;
                }
            }
            for(int i=0;i<n-1&&!flag;i++)
                for(int j=0;j<m-1&&!flag;j++)
                {
                    if(maps[i][j]==maps[i+1][j]||maps[i][j]==maps[i][j+1])
                    {
                        flag=1;
                    }
                }
            if(flag)
                printf("Case #%d: Yes\n",cas);
            else
                printf("Case #%d: No\n",cas);
            cas++;
        }
    }
    return 0;
}
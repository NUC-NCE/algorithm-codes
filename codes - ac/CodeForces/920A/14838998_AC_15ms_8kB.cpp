#include<bits/stdc++.h>
using namespace std;
int a[320];
bool vis[320];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        for(int i=0;i<=300;i++)
            vis[i]=false;
        for(int i=0;i<k;i++)
        {
            cin>>a[i];
            vis[a[i]]=true;
        }

        int sum=k;
        for(int i=1;i<=n;i++)
        {
            if(sum>=n)
            {
                printf("%d\n",i);
                break;
            }
            for(int j=0;j<k;j++){
                if(a[j]+i<=n&&vis[a[j]+i]==false){
                    sum++;
                    vis[a[j]+i]=true;
                }
                if(a[j]-i>0&&vis[a[j]-i]==false){
                    sum++;
                    vis[a[j]-i]=true;
                }
            }
        }

    }
    return 0;
}
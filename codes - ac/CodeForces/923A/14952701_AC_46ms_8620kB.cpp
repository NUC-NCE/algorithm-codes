#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int vis[1100000];
int in[1100000];
int main()
{
    int n;
    cin>>n;
    memset(vis,-1,sizeof(vis));
    for(int i=2;i<=n;i++){
        if(vis[i]==-1){
            for(int j=2*i;j<=n;j+=i)
                vis[j]=i;
        }
    }
    /*
    for(int i=1;i<=40;i++)
        if(vis[i]!=-1)
            cout<<i<<"-------"<<vis[i]<<endl;
    int res=1;
    for(int i=2;i<=n;i++)
    {
        if(vis[i]==-1&&n%i==0)
            res=max(res,i);
    }
    cout<<res<<endl;*/
    /*
    int xishu=1000000;
    int flag;
    int ll=res;
    for(int i=res-1;i>=1;i--)
    {
        if(vis[i]==-1)
        {
            for(int j=1;j<=n;j++)
            {
                if(j*i>ll)
                {
                    if(j<xishu)
                    {
                        xishu=j;
                        flag=i;
                        ll=j*i;
                    }
                }
            }
        }
    }
    cout<<xishu<<"  "<<flag<<endl;*/
    for(int i=1;i<=n;i++)
        in[i]=i-vis[i]+1/*,cout<<"["<<in[i]<<","<<i<<"]"<<endl*/;
    //cout<<endl;
    int ans=n;
    //cout<<in[n]<<endl;
    for(int i=in[n];i<=n;i++)
        ans=min(ans,in[i])/*,cout<<"["<<in[i]<<","<<i<<"]"<<endl*/;
    cout<<ans<<endl;

}


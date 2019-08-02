#include<bits/stdc++.h>
using namespace std;
const string x="0";
int m[30][30];
int vis[30];
int flag;
void dfs(int x)
{
    if(flag)
        return ;
    if(x==12)
    {
        flag=1;
        return ;
    }
    vis[x]++;
    for(int i=0; i<=25; i++)
        if(m[x][i]&&!vis[i])
            dfs(i);
}
int main()
{
    string s;
    while(cin>>s)
    {

        if(s==x)
        {

            flag=0;
            dfs(1);
            if(flag)
                cout<<"Yes."<<endl;
            else
                cout<<"No."<<endl;

        }
        else
        {
            m[s[0]-'a'][s[s.length()-1]-'a']++;
        }
    }
    return 0;
}

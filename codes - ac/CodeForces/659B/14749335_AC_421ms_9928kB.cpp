#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+100;
struct node{
    string s;
    int a;
    friend bool operator <(const node x,const node y){
        return x.a>y.a;
    }
}x[maxn];
int main()
{
    int n,m;
    cin>>n>>m;
    int b;
    vector<node>vi[10010];
    for(int i=0;i<n;i++){
        cin>>x[i].s>>b>>x[i].a;
        vi[b].push_back(x[i]);
    }
    for(int i=1;i<=m;i++){
        stable_sort(vi[i].begin(),vi[i].end());
        if(vi[i].size()==2||vi[i][2].a!=vi[i][1].a)
            cout<<vi[i][0].s<<" "<<vi[i][1].s<<endl;
        else
			cout<<"?"<<endl;
    }
    return 0;
}
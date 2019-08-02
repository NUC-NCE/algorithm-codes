#include<bits/stdc++.h>
using namespace std;
struct node{
    char s[50];
    int a;
    friend bool operator <(const node z,const node y){
            return z.a>y.a;
    }
}x[100100];
vector<node>vi[10010];
int main()
{
    int n,m;
    cin>>n>>m;
    int b;
    
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
        vi[i].clear();
    }
    return 0;
}

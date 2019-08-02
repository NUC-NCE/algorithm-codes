#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6+100;
unordered_map<int,int>mp;
vector<int>v;

struct node{
    int x,y;
    node(int a,int b):x(a),y(b){}
    bool operator < (const node& d) const{
        return x<d.x;
    }
};
vector<node>ans[11000000];
int a[11000000];
int x[maxn];
int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
  //  n = 2e5;
  //  int p=1e7;
    for(int i=1;i<=n;i++){
     //   x[i]=p+1-i;
       // scanf("%d",&x[i]);
        cin>>x[i];
        if(!mp[x[i]])
            v.push_back(x[i]);
        mp[x[i]]++;
    }
    int flag=1;
    //printf("OK");
    for(int j=0;j<v.size();j++){
        int temp=mp[v[j]];
        int num=0;
        for(int i=1;i*i<=v[j];i++){
            if(v[j]%i==0&&i*i!=v[j]){
                ans[v[j]].push_back(node(i,v[j]/i));
                ans[v[j]].push_back(node(v[j]/i,i));
                num+=2;
            }
            if(i*i==v[j]){
                ans[v[j]].push_back(node(i,v[j]/i));
                num++;
            }
            if(num>=temp){
                break;
            }
        }
        if(ans[v[j]].size()<temp){
            flag=0;
            break;
        }
    }

    if(!flag)
        cout<<"NO"<<endl;
    else{
//        for(int i=0;i<v.size();i++){
//            sort((ans[v[i]]).begin(),(ans[v[i]]).end());
//        }
        cout<<"YES"<<endl;
        for(int i=1;i<=n;i++){
            int ret=x[i];
            cout<<ans[ret][a[ret]].x<<" "<<ans[ret][a[ret]].y<<endl;
            a[ret]++;
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[100100];
int main()
{
    cin>>n>>m;
    map<int,int>mp;
    vector<int>vi;
    for(int i=1;i<=n;i++)
        cin>>a[i],mp[a[i]]++;
    int i=1;
    int num;
    int sum=0;
    while(1){
        if(!mp[i]){
            sum+=i;
            if(sum>m)
                break;
            vi.push_back(i);

        }
        i++;
    }
    cout<<vi.size()<<endl;
    for(int j=0;j<vi.size();j++){
        cout<<vi[j]<<" ";
    }
    return 0;
}

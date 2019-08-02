#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
using namespace std;
struct info
{
    string name;
    string place;
    int weight;
}m[250];
bool cmp(info a,info b)
{
    if(a.place!=b.place)
        return a.place<b.place;
    if(a.place==b.place)
        return a.name<b.name;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        for(int i=0;i<x;i++)
            cin>>m[i].name>>m[i].place>>m[i].weight;
        sort(m,m+x,cmp);
        for(int i=x-1;i>=1;i--){
            if(m[i].name==m[i-1].name&&m[i].place==m[i-1].place)
                m[i-1].weight+=m[i].weight;
        }
        cout<<m[0].place<<endl;
        cout<<"   |----"<<m[0].name<<"("<<m[0].weight<<")"<<endl;
        for(int i=1;i<x;i++){
            if(m[i].place==m[i-1].place&&m[i].name!=m[i-1].name)
                cout<<"   |----"<<m[i].name<<"("<<m[i].weight<<")"<<endl;
            else if(m[i].place!=m[i-1].place){
                cout<<m[i].place<<endl;
                cout<<"   |----"<<m[i].name<<"("<<m[i].weight<<")"<<endl;
            }
        }
        if(n)
            cout<<endl;
    }
    return 0;
}

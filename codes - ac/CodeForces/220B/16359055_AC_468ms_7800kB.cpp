#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>

#include<ext/pb_ds/hash_policy.hpp>



using namespace std;
const int maxn=3e5+100;
const int maxn1=2e5+100;
const int maxn2=1e6+100;
int n,m;
int res;
int a[maxn];
int len;
__gnu_pbds::gp_hash_table<int,int> val;
//unordered_map<int,int>val;

struct node{
    int l;
    int r;
    int pos;
    int key;
    node(){}
    node(int L,int R,int p):l(L),r(R),pos(p){
        key=r/len;
    }
    bool operator < (const node y){
        if(key==y.key)
            return l<y.l;
        else
            return key<y.key;
    }
}po[maxn1];

void insert(int x){
    
    if(val[x]==x-1)
        res++;
    else if(val[x]==x)
        res--;
    val[x]++;
}
void erease(int x)
{
    
    if(val[x]==x)
        res--;
    else if(val[x]==x+1)
        res++;
    val[x]--;
}
int main(){
    int n;
    scanf("%d%d",&n,&m);
    len=(int)sqrt(n+0.5);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);

    for(int i=1;i<=m;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        po[i]=node(a,b,i);
    }
    sort(po+1,po+1+m);
    /*
    for(int i=1;i<=m;i++)
        printf("%d %d\n",po[i].l,po[i].r);
    */
    int L=1,R=1;
    val[a[1]]=1;
    vector<int>v(m);
    if(a[1]==1)
        res=1;
    else
        res=0;

    for(int i=1;i<=m;i++){
        //cout<<res<<endl;
        while(R<po[i].r) insert(a[++R]);
        while(L>po[i].l) insert(a[--L]);
        while(R>po[i].r) erease(a[R--]);
        while(L<po[i].l) erease(a[L++]);
        v[po[i].pos-1]=res;
    }
    for(int i=0;i<m;i++)
        printf("%d\n",v[i]);
    return 0;
}

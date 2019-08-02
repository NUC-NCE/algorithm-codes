#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
struct node{
    int s,d,in,p;
    friend  bool operator < (node A,node B){
        if(A.s!=B.s)
            return A.s<B.s;
        else
            return A.in<B.in;
    }
}a[5000];
int ans[1100];

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d%d",&a[i].s,&a[i].d);
            a[i].in=i;
            a[i].p=i;
        }
        sort(a,a+n);
        int ret=0,res=0;
        for(int i=0;i<n;i++){
            if(i==0){
                ans[a[i].p]=a[i].s;
                res=ans[a[i].p];
            }
            else{
                if(res<a[i].s){
                    res=a[i].s;
                    ans[a[i].p]=res;
                }
                else{
                    if(res>=a[i].s){
                        int ind=res-a[i].s;
                        if(a[i].s+ind<a[i].d){
                            ans[a[i].p]=a[i].s+ind+1;
                            res=a[i].s+ind+1;
                        }
                        else
                            ans[a[i].p]=0;
                    }
                    else
                        ans[a[i].p]=0;
                }
            }
        }
        for(int i=0;i<n;i++)
            printf("%d ",ans[i]);
        printf("\n");
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int a[50100];
int b[50100];
int n,m;
int main(){
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<m;i++)
        scanf("%d",&b[i]);
    for(int i=n-1;i>0;i--)
    if(a[i]>a[i-1]){
        a[i]=a[i-1];
    }
    int d=0;
    int ans=0;
    if(a[0]<b[0])
        printf("0\n");
    else
    {
        for(int i=n-1;i>=0;i--){
        if(b[d]<=a[i]){
            d++;
            ans++;
        }
        }
        printf("%d\n",ans);
    }
}

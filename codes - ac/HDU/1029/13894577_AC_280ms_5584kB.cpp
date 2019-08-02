#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int ll;
const int maxn=1e6;
int a[maxn];

int n;
int main(){
    while(scanf("%d",&n)!=EOF){
        memset(a,0,sizeof(a));
        for(int i=0;i<n;i++){
            int x;
            scanf("%d",&x);
            a[x]++;
        }
        for(int i=0;i<maxn;i++){
            if(a[i]>=(n+1)/2){
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}
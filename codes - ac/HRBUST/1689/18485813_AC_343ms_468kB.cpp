#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n,m,k;
    while(scanf("%d%d%d",&n,&m,&k)!=EOF){
        if((k>m||k>n)||(k%2!=n%2)) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int solve(int x){
    int num=0;
    for(int i=1;i<x;i++){
        if(x%i==0)
            num+=i;
    }
    return num;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int l,r;
        scanf("%d%d",&l,&r);
        //cout<<solve(l)<<" "<<solve(r)<<endl;
        if(solve(l)==r&&solve(r)==l)
            puts("YES");
        else
            puts("NO");

    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,a,b,c,d;
        scanf("%d%d%d%d%d",&n,&a,&b,&c,&d);
        int sum=a+b+c+d;
        if(sum*2>=(n+1))
            puts("Yes");
        else
            puts("No");
    }
    return 0;
}

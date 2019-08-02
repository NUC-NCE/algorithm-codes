#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
double ans[200000];
int main(){
    for(int i=1;i<=99999;i++)
        ans[i]=1.0000000/(2.000000*i)+ans[i-1];
    printf("# Cards  Overhang\n");
    int n;
    while(scanf("%d",&n)!=EOF){
        printf("%5d\%10.3f\n",n,ans[n]);

    }
    return 0;
}

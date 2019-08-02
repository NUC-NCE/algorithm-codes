#include<bits/stdc++.h>
#define rep(a,b,i) for(int i=a;i<=b;i++)
#define reps(a,b,i) for(int i=a;i>=b;i--)
#define sd(x) scanf("%d",&x)
#define ss(x) scanf("%s",x)
#define sc(x) scanf("%c",&x)
#define sf(x) scanf("%f",&x)
#define slf(x) scanf("%lf",&x)
#define slld(x) scanf("%lld",&x)
#define me(x,b) memset(x,b,sizeof(x))
#define pd(d) printf("%d\n",d);
#define plld(d) printf("%lld\n",d);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int num[300][60];
void init(){
    num[0][0]=1;
    num[1][0]=1;
    num[2][0]=1;
    for(int i=3;i<=200;i++){
        int cas=0;
        for(int j=0;j<=50;j++){
            num[i][j]=(num[i-1][j]+num[i-2][j]+cas)%10;
            cas=(num[i-1][j]+num[i-2][j]+cas)/10;
        }
    }
}
int main()
{
    int n;
    init();
    while(~sd(n)){
        n++;
        for(int i=50;i>=0;i--){
            if(num[n][i]!=0){
                for(int j=i;j>=0;j--){
                    printf("%d",num[n][j]);
                }
                printf("\n");
                break;
            }
        }
    }
    return 0;
}




#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn =1e6+5;
char a[maxn],b[maxn];
int main()
{

	int t;
	scanf("%d",&t);

	while(t--){
		int n;
		scanf("%d",&n);
		scanf("%s%s",a,b);
		int num=0;

        for(int i=0;i<n;i++){
            if(a[i]==b[i])
                a[i]='0';
            else
                a[i]='1';
        }
        if(a[0]=='1')
            num++;
		for(int i=1;i<n;i++){
            if(a[i]=='1'&&a[i]!=a[i-1])
                num++;
		}
		//cout<<num<<endl;
		ll ans=1;
        if(num==0){
            ans=1LL*n*(n+1LL)/2;
        }
        else if(num==1){
            ans=2LL*(n-1LL);
        }
        else if(num==2){
            ans=6LL;
        }
        else if(num>2){
            ans=0LL;
        }
		printf("%lld\n",ans);
	}
	return 0;
}

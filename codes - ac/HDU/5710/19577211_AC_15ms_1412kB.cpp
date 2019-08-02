#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int d[200];

int main()
{
    int t;
    cin>>t;
    while(t--){
        ll a;ll b;
        cin>>a>>b;
        ll x=2LL*b-a;
        ll y=b*9LL;
        ll ret=__gcd(x,y);
        if(x==0){
            puts("1");
            continue;
        }
        x/=ret;
        y/=ret;
        if(5*x>y){
            puts("0");
            continue;
        }
        if(2*b<a){
            puts("0");
            continue;
        }

		int pos=x;
		for(int i=1;i<=x;i++)
			d[i]=5;
		y-=5*x;
		for(int i=1;i<=x;i++)
		{
			d[i]+=min(4LL,y);
			y-=d[i]-5LL;
			if (!y) break;
		}

		while(y)
		{
			d[++pos]=min(4LL,y);
			y-=d[pos];
		}

		for(int i=pos;i>=1;i--)
			cout<<d[i];
		cout<<endl;
    }


    return 0;
}

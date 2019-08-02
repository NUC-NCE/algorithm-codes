#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[200005],b[200005];
int n,p,q;
string x;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
        cin>>a[i];
		p=a[i],q=i;
		if(p>q){
			swap(p,q);
		}
		if(p<q){
                        b[p+1]++;
                        b[q+1]--;
		}
	}
	cin>>x;
	int flag=0;
	for(int i=2;i<=n;i++){
		b[i]+=b[i-1];
		if(b[i]>0&&x[i-2]=='0'){
			flag=1;
			break;
		}
	}
	if(flag)
		puts("NO");
	else
		puts("YES");
	return 0;
}
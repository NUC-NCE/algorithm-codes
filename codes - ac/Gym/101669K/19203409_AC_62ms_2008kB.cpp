#include<bits/stdc++.h>
using namespace std;
struct node{
	int pos,val;
	node(){
	}
	node(int a,int b):pos(a),val(b){
	}
	bool operator < (const node &x)const{
		if(val==x.val)
			return pos>x.pos;
		else
			return val>x.val;
	}
};

int ans[110000];
int main()
{
	int n;
    ios::sync_with_stdio(false);
	while(cin>>n){
		priority_queue<node>p;
		int m=n;
		for(int i=1;i<=n;i++){
			ans[i]=0;
		}
		for(int i=1;i<=n;i++){
			int x;
			cin>>x;
			p.push(node(i,x));
		}
		while(!p.empty()){
			//cout<<(p.top()).pos<<" "<<n<<endl;
			ans[(p.top()).pos]=n--;
			p.pop();
		}
		for(int i=1;i<=m;i++)
			printf("%d%c",ans[i],i==m?'\n':' ');

	}
	return 0;
}

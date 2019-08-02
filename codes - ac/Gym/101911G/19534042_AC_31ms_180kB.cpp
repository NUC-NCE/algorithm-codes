#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e3+100;
int a[maxn];
set<int>s;
int n;

int main()
{
	scanf("%d",&n);
	int x;
	int flag=1;
	for(int i=2;i<=n;i++){
		scanf("%d%d",&a[i],&x);
		if(x!=n) flag=0;
	}
	for(int i=1;i<=n;i++){
		s.insert(i);
	}
	sort(a+2,a+n+1);
	
	
	a[1]=a[2];
	s.erase(a[2]);
	for(int i=3;i<=n;i++){
		if(a[i]!=a[i-1]){
			a[i-1]=a[i];
			s.erase(a[i]);
		}
		else{
			if(*(s.begin())<a[i]){
				a[i-1]=*(s.begin());
				s.erase(a[i-1]);
			}
			else{
				flag=0;
				break;
			}
		}
	}
	a[n]=n;
	if(!flag)
		puts("NO");
	else{
		puts("YES");
		for(int i=1;i<n;i++)
			printf("%d %d\n",a[i],a[i+1]);
	}
}
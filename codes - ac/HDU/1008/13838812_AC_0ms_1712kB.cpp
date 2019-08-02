#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
ll a[100];
int main(){
	ll sum=0;
 	while(cin>>n&&n){
 		sum=0;
 		if(n==1){
 			cin>>a[0];
 			sum+=6*a[0]+5;
 		}
 		else{
 			cin>>a[0];
 			sum+=6*a[0]+5;
 			for(int i=1;i<n;i++){
 				cin>>a[i];
 				if(a[i]>a[i-1])
 					sum+=(6*(a[i]-a[i-1])+5);
 				else
 					sum+=(4*(a[i-1]-a[i])+5);
 			}
 		}
 		cout<<sum<<endl;
 	}
 	return 0;
}
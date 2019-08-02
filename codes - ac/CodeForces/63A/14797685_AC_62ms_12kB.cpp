#include<bits/stdc++.h>
using namespace std;
int n;
struct node{
    string a;
    string b;
}x[120];
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>x[i].a>>x[i].b;
    for(int i=0;i<n;i++)
		if(x[i].b=="rat")
			cout<<x[i].a<<endl;
	for(int i=0;i<n;i++)
		if(x[i].b=="woman"||x[i].b=="child")
            cout <<x[i].a<<endl;
	for(int i=0;i<n;i++)
		if(x[i].b=="man")
			cout<< x[i].a<<endl;
	for(int i=0;i<n;i++)
		if(x[i].b=="captain")
			cout<<x[i].a<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=310000;
int a[maxn];
int main()
{
	int n,m;
	cin>>n>>m;
	if((n-m>1)||(m>(2*n+2)))
        puts("-1");
    else if(n==m+1)
    {
        int k=n+m;
        for(int i=1;i<=k;i++)
            if(i%2)
                cout<<0;
            else
                cout<<1;
    }
    else{
        string s;
        while(n)
        {
            s.push_back('1');
            n--;
            s.push_back('0');
            m--;
            //cout<<" "<<m<<endl;
        }
        if(m){
            s.push_back('1');
            m--;
        }
        //cout<<" "<<s<<endl;
        for(int i=0;i<s.length();i++)
        {
            if((i+2)%2&&m!=0)
            {
                cout<<1;
                m--;
                //cout<<" "<<m<<endl;
            }
            cout<<s[i];
        }
        if(m)
            cout<<1;
    }

	return 0;
}

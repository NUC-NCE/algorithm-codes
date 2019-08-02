#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=31000;
int a[maxn];
bool check(int a)
{
    int num=0;
    while(a){
        num+=a%10;
        a/=10;
    }
    if(num==10)
        return true;
    else
        return false;
}
int main()
{
    int n;
    int x=19;
    cin>>n;
    while(n)
    {
        if(check(x))
            n--;
        x++;
    }
    cout<<x-1<<endl;
}


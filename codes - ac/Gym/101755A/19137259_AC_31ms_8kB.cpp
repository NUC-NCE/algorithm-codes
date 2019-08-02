#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a<=b||a%b)
        puts("-1");
    else{
        int num=a/b;
        int x=num/2;
        int y=num-x;
        if(__gcd(x,y)!=1){
            x++;
            y--;
        }
        if(x%2==0)
        {
            x++;
            y--;
        }
        if(x<y)
            swap(x,y);
        cout<<y*b<<" "<<x*b<<endl;
    }
    return 0;
}

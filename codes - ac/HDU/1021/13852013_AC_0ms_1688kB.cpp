#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
while(cin>>n)
{
n%=8;
if(n==2||n==6)
puts("yes");
else
puts("no");
}

}
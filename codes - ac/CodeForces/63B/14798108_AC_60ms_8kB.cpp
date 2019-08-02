#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[120];
/*
1 1 1 1
1 1 1 2
1 1 2 3
1 2 3 4
2 3 4 5
3 4 5 6

1 2 2 3
2 2 3 4
2 3 4 5
3 4 5 6
4 5 6 7
*/
int main()
{
    memset(a,0,sizeof(a));

    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int num=0;
    while(a[0]<k)
    {
        for(int i=0;i<n;i++)
            if(a[i]!=a[i+1])
                a[i]++;
        /*for(int i=0;i<=n;i++)
            cout<<a[i]<<" ";
        cout<<endl;*/
        num++;
    }
    cout<<num<<endl;
    return 0;
}

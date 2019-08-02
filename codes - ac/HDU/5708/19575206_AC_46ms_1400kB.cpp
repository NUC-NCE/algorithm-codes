#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
                int q,k;
        cin>>q>>k;
        while(q--){
            int n,m;
            cin>>n>>m;
            if(n<m)
                swap(n,m);
            if(k==1){
                if(m%2==0||(m%2==1&&n%2==0))
                    puts("Alice");
                else
                    puts("Bob");
            }
            else{
                int ret=2*k+2;
                if(m%ret>=1&&m%ret<=k){
                    if((n-m)%2==1)
                        puts("Alice");
                    else
                        puts("Bob");
                }
                else if(m%(k+1)==0)
                    puts("Alice");
                else{
                    if((n-m)%2)
                        puts("Bob");
                    else
                        puts("Alice");
                }
            }
        }

    }
//    int n,m,k;
//    cin>>n>>m>>k;
//    sg[1][1]=0;
//    for(int i=2;i<=m;i+=2){
//        sg[i+1][1]=0;
//        sg[1][i+1]=0;
//        sg[i][1]=1;
//        sg[1][i]=1;
//    }
//    for(int i=2;i<=n;i++){
//        for(int j=2;j<=m;j++){
//            if(!sg[i-1][j]||!sg[i][j-1]||(i>k&&j>k&&!sg[i-k][j-k]))
//            {
//                sg[i][j]=1;
//                continue;
//            }
//            else
//                sg[i][j]=0;
//        }
//    }
//    for(int i=1;i<=n;i++)
//    {
//        for(int j=1;j<=m;j++)
//            printf("%c  ",sg[i][j]==1?'N':'P');
//        cout<<endl;
//    }
    return 0;
}

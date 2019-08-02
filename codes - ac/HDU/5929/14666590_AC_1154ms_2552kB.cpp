#include<bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;
const int maxn=4e5+100;
int a[maxn];
int l,r,n,flag;

int main()
{
    int t;
    scanf("%d",&t);
    for(int cas=1;cas<=t;cas++){
        printf("Case #%d:\n",cas);
        scanf("%d",&n);
        flag =1;
        l=n;
        r=n-1;
        deque<int> dq;
        while(n--){
            char s[20];
            scanf("%s",s);
            if(s[0]=='P'){
                if(s[1]=='U'){
                    int x;
                    scanf("%d",&x);
                    if(flag)
                    {
                        a[++r]=x;
                        if(x==0)
                            dq.push_back(r);
                    }
                    else{
                        a[--l]=x;
                        if(x==0)
                            dq.push_front(l);
                    }
                }
                else{
                    if(flag){
                        if(a[r]==0)
                            dq.pop_back();
                        r--;
                    }
                    else{
                        if(a[l]==0)
                            dq.pop_front();
                        l++;
                    }
                }
            }
            else if(s[0]=='R')
                flag^=1;
            else{
                if(dq.empty()){
                    if(r<l){
                         printf("Invalid.\n");
                         continue;
                    }
                    int num=r-l+1;
                    if(num&1)
                        printf("1\n");
                    else
                        printf("0\n");
                }
                else{
                    if(flag){
                        int fr=dq.front();
                        int num=fr-l;
                        if(num&1){
                            if(fr==r)
                                printf("1\n");
                            else
                                printf("0\n");
                        }
                        else{
                            if(fr==r)
                                printf("0\n");
                            else
                                printf("1\n");
                        }
                    }
                    else{
                        int fr=dq.back();
                        int num=r-fr;
                        if(num&1){
                            if(fr==l)
                                printf("1\n");
                            else
                                printf("0\n");
                        }
                        else{
                            if(fr==l)
                                printf("0\n");
                            else
                                printf("1\n");
                        }
                    }
                }
            }
        }
    }
    return 0;
}

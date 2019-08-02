//                                                          _ooOoo_
//                                                         o8888888o
//                                                         88" . "88
//                                                         (| -_- |)
//                                                          O\ = /O
//                                                      ____/`---'\____
//                                                    .   ' \\| |// `.
//                                                     / \\||| : |||// \
//                                                   / _||||| -:- |||||- \
//                                                     | | \\\ - /// | |
//                                                   | \_| ''\---/'' | |
//                                                    \ .-\__ `-` ___/-. /
//                                                 ___`. .' /--.--\ `. . __
//                                              ."" '< `.___\_<|>_/___.' >'"".
//                                             | | : `- \`.;`\ _ /`;.`/ - ` : | |
//                                               \ \ `-. \_ __\ /__ _/ .-` / /
//                                       ======`-.____`-.___\_____/___.-`____.-'======
//                                                          `=---='
//
//                                       .............................................
//                                              佛祖保佑             永无BUG
//                                      佛曰:
//                                              写字楼里写字间，写字间里程序员；
//                                              程序人员写程序，又拿程序换酒钱。
//                                              酒醒只在网上坐，酒醉还来网下眠；
//                                              酒醉酒醒日复日，网上网下年复年。
//                                              但愿老死电脑间，不愿鞠躬老板前；
//                                              奔驰宝马贵者趣，公交自行程序员。
//                                              别人笑我忒疯癫，我笑自己命太贱；
//                                              不见满街漂亮妹，哪个归得程序员？

//#include<bits/stdc++.h>
#include<cstdio>
#include<algorithm>
#include<vector>
#define rep(a,b,i) for(int i=1;i<=n;i++)
#define sd(x) scanf("%d",&x)
#define ss(x) scanf("%s",&x)
#define sc(x) scanf("%c",&x)
#define sf(x) scanf("%f",&x)
#define slf(x) scanf("%lf",&x)
#define slld(x) scanf("%lld",&x)
#define me(x,b) memset(x,b,sizeof(x))
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int maxn=100100;
const int maxm=5050;
const int B=1000;

int A[maxn];
int I[maxm],J[maxm],K[maxm];
int n,m;
int nums[maxn];
vector<int> bucket[maxn/B];

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&nums[i]);
        A[i]=nums[i];
    }

    sort(A+1,A+n+1);
    for(int i=1;i<=m;i++)
        scanf("%d%d%d",&I[i],&J[i],&K[i]);

    for(int i=1;i<=n;i++)
        bucket[i/B].push_back(nums[i]);
    for(int i=0;i<n/B;i++)
        sort(bucket[i].begin(),bucket[i].end());

    for(int i=1;i<=m;i++)
    {
        int l=I[i],r=J[i],k=K[i];
        int lb=0,ub=n;
        while(ub-lb>1)
        {
            int c=0;
            int tl=l,tr=r+1;
            int mid=(ub+lb)/2;
            int x=A[mid];
            while(tl<tr&&tl%B!=0)
            {
                if(nums[tl++]<=x)
                {
                    c++;
                }
            }
            while(tl<tr&&tr%B!=0) if(nums[--tr]<=x) c++;
            for(int i=tl/B;i*B+B<=tr;i++)
            {
                c+=upper_bound(bucket[i].begin(),bucket[i].end(),x)-bucket[i].begin();
            }
            if(c>=k)//c 满足条件，但是可以更大一点
                ub=mid;
            else
                lb=mid;
        }
        printf("%d\n",A[ub]);
    }
    return 0;
}
/*
const int st_size=(1<<18)-1;
int n,m;
const int maxn=100100;
const int maxm=5050;
int A[maxn];
int I[maxm],J[maxm],K[maxm];
int nums[maxn];
vector<int>dat[st_size];

void init(int k,int l,int r)
{
    if(r-l==1)
        dat[k].push_back(A[l]);
    else
    {
        int lch=k*2+1,rch=k*2+2;
        init(lch,l,(l+r)/2);
        init(rch,(l+r)/2,r);
        dat[k].resize(r-l);
        merge(dat[lch].begin(),dat[lch].end(),dat[rch].begin(),dat[rch].end(),dat[k].begin());
    }
}
int query(int i,int j,int x,int k,int l,int r)
{
    if(j<=l||r<=i)
    {
        return 0;
    }
    else if(i<=l&&r<=j)
    {
        return upper_bound(dat[k].begin(),dat[k].end(),x)-dat[k].begin();
    }
    else
    {
        int lc=query(i,j,x,k*2+1,l,(l+r)/2);
        int rc=query(i,j,x,k*2+2,(l+r)/2,r);
        return lc+rc;
    }
}
void solve()
{
    for(int i=0; i<n; i++)
        nums[i]=A[i];
    init(0,0,n);
    for(int i=0; i<m; i++)
    {
        int l=I[i],r=J[i]+1,k=K[i];
        int lb=-1,ub=n-1;
        while(ub-lb>1)
        {
            int md=(ub+lb)/2;
            int c=query(1,r,nums[md],0,0,n);
            if(c>=k)
                ub=md;
            else
                lb=md;
        }
        printf("%d\n",nums[ub]);
    }
}
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=0; i<n; i++)
        scanf("%d",&A[i]);
    for(int i=0; i<m; i++)
        scanf("%d%d%d",&I[i],&J[i],&K[i]);
    solve();

}*/

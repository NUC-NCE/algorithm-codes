#include<cstdio>
#include<algorithm>
#include<set>
using namespace std;
int gcd(int x,int y)
{
    return y?gcd(y,x%y):x;
}
int a,b;
struct node
{
    int a,b;
    node(){}
    node(int aa,int bb) :a(aa),b(bb){}
    bool operator<(const node &t1)const
    {
        if(a!=t1.a)
            return a<t1.a;
        else
            return b<t1.b;
    }
};
set<node> s;
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        if(a==0)
            continue;
        int g=gcd(a,b);
        a=a/g;
        b=b/g;
        s.insert(node(a,b));
    }
    printf("%d\n",s.size());
    return 0;
}
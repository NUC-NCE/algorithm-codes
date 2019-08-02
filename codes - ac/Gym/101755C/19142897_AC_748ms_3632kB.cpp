#include<bits/stdc++.h>
using namespace std;
struct Node{
    int a,b;
    Node(){}
    Node(int a,int b):a(a),b(b){}
    bool operator<(const struct Node&pt)const{
        if(b==pt.b)
            return a<pt.a;
        return b<pt.b;
    }
};
vector<Node>node;
int s,e;
int main(){
    int n;
    cin>>n;
    int a,b;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        node.push_back(Node(a,b));
    }
    sort(node.begin(),node.end());
    vector<int>vi;
    int et=-1;
    for(int i=0;i<n;i++){
        if(et<node[i].a){
            et=max(node[i].b,et);
            vi.push_back(node[i].b);
        }
    }
    cout<<vi.size()<<endl;
    int len=vi.size();
    for(int i=0;i<len;i++){
        cout<<vi[i]<<" \n"[i==len-1];
    }
    return 0;
}

/*
5
2 4
1 3
2 3
3 6
4 5


7
0 1
1 2
2 3
1 3
3 4
4 7
5 7
*/

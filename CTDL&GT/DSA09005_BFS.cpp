#include<bits/stdc++.h>
using namespace std;
vector<int>ke[1001];
int chuaxet[1001];
void BFS(int u){
    queue<int> q;
    q.push(u);
    chuaxet[u]=0;
    cout<<u<<" ";
    while(!q.empty()){
        int x=q.front();q.pop();
        for(int i=0;i<ke[x].size();i++){
            int y=ke[x][i];
            if(chuaxet[y]){
                q.push(y);
                chuaxet[y]=0;
                cout<<y<<" ";
            }
        }
    }
}
int main(){
    int t;cin >>t;
    while(t--){

        int v,e,u;
        cin >> v >> e >> u ;
        memset(chuaxet,1,sizeof(chuaxet));
        for(int j=1;j<=v;j++) ke[j].clear();
        for(int i=1;i<=e;i++){
            
            int a,b;
            cin>> a>>b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        BFS(u);
        cout<<endl;
    }
    return 0;
}
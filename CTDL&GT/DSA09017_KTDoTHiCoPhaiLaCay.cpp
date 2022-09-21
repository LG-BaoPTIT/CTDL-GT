#include<bits/stdc++.h>
using namespace std;
vector<int>ke[1001];
int chuaxet[1001];
void bfs(int u){
    queue<int> q;
    q.push(u);
    chuaxet[u]=0;
    
    while(!q.empty()){
        int x=q.front();q.pop();
        for(int i=0;i<ke[x].size();i++){
            int y=ke[x][i];
            if(chuaxet[y]){
                q.push(y);
                chuaxet[y]=0;
                
            }
        }
    }
}
int main(){

    int t;cin >>t;
    while(t--){
        int v,solt=0;cin >>v;
        for(int i=1;i<=v;i++)ke[i].clear();
        memset(chuaxet,1,sizeof(chuaxet));
        for(int j=1;j<=v-1;j++){
            int a,b;cin >>a>>b;
            ke[a].push_back(b);
            ke[a].push_back(b);
        }
        for(int i=1;i<=v;i++){
            if(chuaxet[i]){
                solt++;
                bfs(i);
            }
        }
        if(solt==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
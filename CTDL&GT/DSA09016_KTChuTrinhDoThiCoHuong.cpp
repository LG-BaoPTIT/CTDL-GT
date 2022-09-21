#include<bits/stdc++.h>
using namespace std;
vector<int>ke[1001];
int color[1001];
bool DFS(int u,int cha){
    color[u]=1;
    for(int i=0;i<ke[u].size();i++){
        int v=ke[u][i];
        if(color[v]==0){
            if(DFS(v,u)) return true;
        }
        else if(color[v]==1) return true; 
    }
    color[u]=2;
    return false;
}


int main(){

    int t;cin >>t;
    while(t--){
        int x=0;
        int v,e;cin >>v>>e;
        for(int i=1;i<=v;i++)ke[i].clear();
        memset(color,0,sizeof(color));
        for(int j=1;j<=e;j++){
            int a,b;cin >>a>>b;        
            ke[a].push_back(b);
                       
        }
        for(int k = 1; k <= v; k++){
		    if(color[k]==0){
			    if(DFS(k,0)){
				    cout << "YES\n";
				    x=1;
                    break;
			    }
		    }
	    }
    if(x==0) cout<<"NO"<<endl;
        
}
 return 0;
}
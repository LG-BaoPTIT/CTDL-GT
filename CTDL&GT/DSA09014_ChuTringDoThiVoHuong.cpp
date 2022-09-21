#include<bits/stdc++.h>
using namespace std;
vector<int>ke[1001];
int chuaxet[1001];
bool DFS(int u,int cha){
    chuaxet[u]=0;
    for(int i=0;i<ke[u].size();i++){
        int v=ke[u][i];
        if(chuaxet[v]){
            if(DFS(v,u)) return true;
        }
        else if(v!=cha) return true; 
    }
    return false;
}


int main(){

    int t;cin >>t;
    while(t--){
        int x=0;
        int v,e;cin >>v>>e;
        for(int i=1;i<=v;i++)ke[i].clear();
        memset(chuaxet,1,sizeof(chuaxet));
        for(int j=1;j<=e;j++){
            int a,b;cin >>a>>b;        
            ke[a].push_back(b);
            ke[b].push_back(a);            
        }
        for(int k = 1; k <= v; k++){
		    if(chuaxet[k]){
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
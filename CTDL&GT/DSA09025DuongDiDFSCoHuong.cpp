#include<bits/stdc++.h>
using namespace std;
vector<int>list_[1001];
int chuaxet[1001];

int ok=0;

void Reset(int v){
    for(int i=1;i<=v;i++) list_[i].clear();
    memset(chuaxet,1,sizeof(chuaxet));
    ok=0;
    
}
void DSK(int e){
    while(e--){
        int a,b;cin >>a >>b;
        list_[a].push_back(b);
    }
}
void DFS(int v,int e,int a,int b,int truoc[]){
    stack<int> st;
    st.push(a);
    chuaxet[a]=0;
    
    while(!st.empty()){
        int x=st.top();st.pop();
        if(x==b){
            vector<int>vs;
            vs.push_back(x);
            int tmp=truoc[x];
            while(tmp!=a){
                if(tmp==0){
					cout << "-1";
                    
					return;
				}
                vs.push_back(tmp);
                tmp=truoc[tmp];
            }
            vs.push_back(a);
            reverse(vs.begin(),vs.end());
            for(int i=0;i<vs.size();i++){
                cout<<vs[i]<<" ";
            }
            
            return;
        }
       for(int i=0;i<list_[x].size();i++){
           int y=list_[x][i];
           if(chuaxet[y]){
               chuaxet[y]=0;
               st.push(x);st.push(y);
               truoc[y]=x;
               break;
           }
       }
    }
    cout<<-1;
    
}

int main(){
    int t;cin >> t;
    while(t--){
        int v,e,a,b;int truoc[1001];
        memset(truoc,0,sizeof(truoc));
        cin >> v >> e >> a >>b;
        Reset(v);
        DSK(e);
        DFS(v,e,a,b,truoc);
       cout<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
string xuly(string s){
    stack<int> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') st.push(i);
        else if(s[i]==')'){
            int t=st.top();st.pop();
            if(t==0) continue;
            else if(s[t-1]=='+') continue;
            else if(s[t-1]=='-'){
                for(int j=t;j<=i;j++){
                    if(s[j]=='+') s[j]='-';
                    else if(s[j]=='-') s[j]='+';
                }
            }
        }

        
    }
    string x="";
    for(int i=0;i<s.size();i++){
        if(s[i]!='('&&s[i]!=')'){
           x+=s[i];
        }
    }
  return x;
}
int main(){
    //ios_base::sync_with_stdio(0);cin.tie(0);
    int t;cin >>t;
    cin.ignore();
    while(t--){
        string a; cin >>a;
        cin.ignore();
        string b;cin>>b;
        b=xuly(b);
        a=xuly(a);
        if(a==b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}

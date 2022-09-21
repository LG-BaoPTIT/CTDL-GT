#include<bits/stdc++.h>
#include<stdlib.h>
#include<string>
using namespace std;
void xuly(string s){
    stack<char>st; 
    int ans=0;
    if(s[0]==')') { ans++;s[0]='(';}
    if(s[s.length()-1]=='(') {ans++;s[s.length()-1]=')';}
    for(int i=0;i<s.length();i++){
        if(s[i]=='(') st.push(s[i]);
        else{
            if(!st.empty()&&st.top()=='(') st.pop();
            else if(st.empty()) {ans++;st.push('(');}
        }
    }
    if(!st.empty()) ans+=st.size()/2;
   cout<<ans;
}
int main(){
    int t;cin>>t;
    cin.ignore();
    while(t--){
        string s;cin>>s;
        xuly(s);
       cout<<endl;
    }
    return 0;
}
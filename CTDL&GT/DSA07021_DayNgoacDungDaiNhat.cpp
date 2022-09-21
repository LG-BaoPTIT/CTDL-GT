#include<bits/stdc++.h>
#include<stdlib.h>
#include<string>
using namespace std;
void xuly(string s){
    stack<int>st; st.push(-1);
   int res=0;
   for(int i=0;i<s.length();i++){
       if(s[i]=='(' ) st.push(i);
       else{
           st.pop();
           if(st.size()>0) res=max(res,i-st.top());
           if(st.size()==0) st.push(i);
       }
   }
   cout<<res<<endl;
}
int main(){
    int t;cin>>t;
    cin.ignore();
    while(t--){
        string s;cin>>s;
        xuly(s);
       
    }
    return 0;
}
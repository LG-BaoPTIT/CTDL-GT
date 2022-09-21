#include<bits/stdc++.h>
using namespace std;
void xuly(string s){
    stack<string>st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){
            string s1=st.top();st.pop();
            string s2=st.top();st.pop();
            string tmp="("+s2+s[i]+s1+")";
            st.push(tmp);
        }
        else st.push(string(1,s[i]));
    }
    cout<<st.top();
}
int main(){
    int t; cin >>t;
    cin.ignore();
    while(t--){
        string s;cin >>s;
        xuly(s);
        cout<<endl;
    }

    return 0;
}
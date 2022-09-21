#include<bits/stdc++.h>
using namespace std;
void xuly(string s){
    stack<string>st;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){
            string s1=st.top();st.pop();
            string s2=st.top();st.pop();
            string tmp=s1+s2+s[i];
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
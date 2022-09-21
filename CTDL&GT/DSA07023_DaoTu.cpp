#include<bits/stdc++.h>
using namespace std;

stack<string>st;
void tach_tu(string s){
    string delimiter = " ";
    size_t pos = 0;
    string token;
    while ((pos = s.find(delimiter)) != std::string::npos) {
        token = s.substr(0, pos);
        st.push(token);
        s.erase(0, pos + delimiter.length());
}
  st.push(s);
}
void xuat(){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main(){
    int t;cin >>t;
    cin.ignore();
    while(t--){
       
       string s;
       getline(cin,s);
       tach_tu(s);
       xuat();
       cout<<endl;
    
    }
    return 0;
}
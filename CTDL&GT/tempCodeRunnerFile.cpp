#include<bits/stdc++.h>
using namespace std;
void printfMinNumber(string s){
	string res;
	stack<int> st;
	for(int i=0;i<=s.length();i++){
		st.push(i+1);
		if(i==s.length()|| s[i]=='I'){
			while(!st.empty()){
				res+=to_string(st.top());
				st.pop();
			}
		}
	}
	cout<<res;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	for(int i=1;i<=t;i++){
		string s;cin>>s;
		cout<<"Test "<<i<<": ";
		printfMinNumber(s);
		cout<<endl;
	}
}
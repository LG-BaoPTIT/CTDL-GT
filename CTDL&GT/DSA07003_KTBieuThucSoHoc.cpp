#include<bits/stdc++.h>
using namespace std;
int kt(string s){
	stack<char> st;
	int check=1;
	for(int i=0;i<=s.length();i++){
		
		if(s[i] == ')'){
			check=1;
			char top=st.top();st.pop();
			while(top !='('){
					if(top=='+'||top=='-'||top=='*'||top=='/') check=0;
					top=st.top();st.pop();
			}
			if(check) break;
		}
		else st.push(s[i]);
	}
	return check;
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		
		string s;
		getline(cin,s);
		if(kt(s)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;

	}
	return 0;
}
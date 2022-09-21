#include<bits/stdc++.h>
using namespace std;
struct node{
	char key;
	node* left;
	node* right;
	node(char x){
		this->key=x;
		left=right=NULL;
	}
};
bool isOperator(char c){
	if(c=='+'||c=='-'||c=='*'||c=='/') return true;
	return false;
}
void inorder(node *root){
	if(root==NULL) return ;
	inorder(root->left);
	cout<<root->key;
	inorder(root->right);
}
void tree(string s){
	stack<node*> st;
	for(int i=0;i<s.length();i++){
		if(isOperator(s[i])){
			node* h=new node(s[i]);
			node* r=st.top(); st.pop();
			node* l=st.top();st.pop();
			h->left=l;
			h->right=r;
			st.push(h);
		}
		else st.push(new node(s[i]));
	}
	inorder(st.top());
}
int main(){
	int t;cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		tree(s);
		cout<<endl;
	}
	return 0;
}
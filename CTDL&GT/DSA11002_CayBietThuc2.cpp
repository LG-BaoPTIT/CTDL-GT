#include<bits/stdc++.h>
using namespace std;
bool isOperator(string c){
	if(c=="+"||c=="-"||c=="*"||c=="/") return true;
	return false;
}
long long INT(string s){
   long long res=0;
   for(int i=0;i<s.size();i++){
       res=res*10+s[i]-'0';
   }
   return res;
}
long long sovel(int i,string s[]){
    if(isOperator(s[i])){
        if(s[i]=="+") return sovel(2*i+1,s)+sovel(2*i+2,s);
        if(s[i]=="-") return sovel(2*i+1,s)-sovel(2*i+2,s);
        if(s[i]=="*") return sovel(2*i+1,s)*sovel(2*i+2,s);
        if(s[i]=="/") return sovel(2*i+1,s)/sovel(2*i+2,s);
    }
    else return INT(s[i]);
}
int main(){
    int t;cin>>t;
    cin.ignore();
    while(t--){
        int n;cin>>n;cin.ignore();
        string a[1000];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<sovel(0,a)<<endl;
    }
    return 0;
}
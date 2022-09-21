#include<iostream>
#include<string.h>
using namespace std;
int kt(string s){
    int len = s.size();
		int i;
		int d = 0;
		for(i=0;i<len;i++){
			if( s[i]=='1' || s[i]=='3'|| s[i]=='5' || s[i]=='7' || s[i]=='9' || s[i]!=s[len-i-1]){ return 0;	}
        }
    return 1;
}
int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s; 
        cin >> s;
        if(kt(s)) cout <<"YES"<<endl;
        else cout<< "NO"<<endl;
    }
}
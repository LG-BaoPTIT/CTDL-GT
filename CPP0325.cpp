#include<bits/stdc++.h>

using namespace std;
int main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        int chan=0,le=0;
        for(int i=0;i<s.length();i++){
            if(i%2==0) chan+=s[i]-'0';
            else {
                le+=s[i]-'0';
            }
        }
       int x=chan-le;
       if(x<0) x=-x;
       if(x%11==0) cout << "1"<<endl;
       else cout<<"0"<<endl;

    }
    return 0;
}
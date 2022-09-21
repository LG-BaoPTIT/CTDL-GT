#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        int x=s.size();
        int d=1;
        for(int i=0;i<x;i++){
            
            if(s[i]==s[i+1]) {d++;}
            else{
                cout<<s[i]<<d;
                d=1;
            }
        }
        cout<<endl;

    }
    return 0;
}
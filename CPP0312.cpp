#include<iostream>
#include<string.h>
using namespace std;

int tim(char c,char b[]){
    for(int i=0;i<strlen(b);i++){
        if(c==b[i]) return 0;
    }
    return 1;
}
int main(){
    int t;cin>>t; cin.ignore();
    while(t--){
        int n;char s[1000],b[1000],g=0;
        cin.getline(s,999);
        cin>>n;      
        for(int i=0;i<strlen(s);i++){
            if(tim(s[i],b)) b[g++]=s[i];
             }       
        if(strlen(s)>=26&&(26-strlen(b)<=26)) cout<<"1\n";
        else cout<<"0\n";
    }
    return 0;
}
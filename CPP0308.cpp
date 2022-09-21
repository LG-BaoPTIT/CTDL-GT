#include<bits/stdc++.h>

using namespace std;
int kt(char a,char s[]){
    int d=0;
    for(int j=0;j<=strlen(s);j++){
        if(a==s[j]) d++;
        if(d==2) return 0;
    }
    
    return 1;
}
int main(){
    int t;cin>>t;
    while(t--){
        int g=0;
        fflush(stdin);
        char s[100000];
        char str[100000];
        cin.getline(s,100000);
        for(int i=0;i<strlen(s);i++){
            
            if(kt(s[i],s))str[g++]=s[i];
        }
        str[g]='\0';
        
        cout<< str << endl;
    }
    return 0;
}


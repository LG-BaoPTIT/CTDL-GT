#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[100]; cin >> s;
     for(int i=0;i<strlen(s);i++){
         if(s[i]>='A'&&s[i]<='Z') s[i]=s[i]+32;
     }
    for(int i=0;i<strlen(s);i++){
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y'){
            
                cout<<"."<<s[i];
        }
        
    }

    return 0;
}
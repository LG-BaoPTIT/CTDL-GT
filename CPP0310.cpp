#include<bits/stdc++.h>
using namespace std;

void max_(char s[]){
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='5') s[i]='6';
    }
}
void min_(char s[]){
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='6') s[i]='5';
    }
}

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        char s[25],str[25];
        cin>> s;
        cin>> str;
        

        min_(s);
        min_(str);
        cout << atoll(s)+atoll(str) <<" ";
        max_(s);
        max_(str);
        cout << atoll(s)+atoll(str)<< endl; 
    }
    return 0;
}
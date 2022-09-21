#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;


int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin>>s;
         string str="";
         int max=0;
        for(int i=0;i<=s.length();i++){
           if(s[i] <= '9' &&s[i]>='0'){
               str=str+s[i];
           }
           else{
            
               int x= atoi( str.c_str() );
              if(x>max)max=x;
              str="";
           }
        }
        cout<<max<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        char s[100000];
        cin>>s;
        
        int sum=0;
        char a[100000];
        int g=0;
        for(int i=0;i<strlen(s);i++){
            if(s[i]>'9'){
                 a[g++]=s[i];
            }
            else{
                sum+=s[i]-'0';
            }
        }
       sort(a,a+strlen(a));
       for(int i=0;i<strlen(a);i++){
           cout<<a[i];
       }

       cout<<sum<<endl;
       
    }
    return 0;
}
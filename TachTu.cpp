#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;cin>>t;
    cin.ignore();
    while(t--){
        
        string str;
        getline(cin,str);
        string delimiter=" ";
        size_t pos=0;
        string token;
        int d=0;
        while((pos=str.find(delimiter)) != string :: npos){
                token=str.substr(0,pos);
                d++;
              str.erase(0,pos+delimiter.length());
        }
        cout<<++d<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >>t;
    while(t--){

    string s;cin >>s;
    map<char,int> tmp;
    for(char x:s) tmp[x]++;
    int kq=1e8,g=0,count_=0;
    int dem[300];fill_n(dem,300,0);
    for(int i=0;i<s.length();i++){
        dem[s[i]]++;
        if(dem[s[i]]==1) count_++;
        if(count_==tmp.size()){
            while(dem[s[g]]>1){
                dem[s[g]]--;
                g++;
            }
            kq=min(kq,i-g+1);
        }
    }
    cout<< kq<<endl;
    }
  

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    cin.ignore();
    vector<int>ke[n+9];
    for(int i=1;i<=n;i++){
        string s;
        getline(cin,s);
        s+=" ";
        int x=0,j=0;
        while(j<s.size()){
            if(s[j]<='9'&&s[j]>='0'){
                x=x*10+(int)(s[j]-'0');
            }
            else if(x>0){
                ke[i].push_back(x);
                x=0;
            }
            j++;
        }   
    }
    int check[100][100];
    memset(check,0,sizeof(check));
    for(int i=1;i<=n;i++){
        for(int j=0;j<ke[i].size();j++){
            if(check[i][ke[i][j]]==0&&check[ke[i][j]][i]==0){
                cout<<i<<" "<<ke[i][j]<<endl;
                check[i][ke[i][j]]=1;
                check[ke[i][j]][i]=1;
            }
        }
    }

    return 0;
}
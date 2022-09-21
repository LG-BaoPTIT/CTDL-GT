#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int dp[1001][1001];
int lps(string & s1,string & s2,int n1,int n2){
    if(n1==0 || n2==0) return 0;
    if(dp[n1][n2] != -1) return dp[n1][n2];
    if(s1[n1-1]==s2[n2-1]) return dp[n1][n2]=1+lps(s1,s2,n1-1,n2-1) ;
    else return dp[n1][n2] = max(lps(s1,s2,n1-1,n2),lps(s1,s2,n1,n2-1));
}


int main(){
    int t;cin >>t;
    while(t--){
        string s;cin >>s;
        int n=s.size();
     
        memset(dp,-1,sizeof(dp));
        string s2=s;
        reverse(s2.begin(),s2.end());
        cout<< lps(s2,s,n,n)<<endl;
    }
    
    return 0;
}
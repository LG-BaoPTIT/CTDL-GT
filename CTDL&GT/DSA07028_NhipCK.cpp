#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >>t;
    while(t--){
        int n;cin>>n;
        int A[n+1];
        for(int i=0;i<n;i++) cin >>A[i];
        stack<int>s;
        stack<int>p;
        int count_;
        for(int i=0;i<n;i++){
            count_=1;
            while(s.size()!=0&&A[i]>=s.top()){
                count_+=p.top();
                s.pop();
                p.pop();
            }
            s.push(A[i]);
            p.push(count_);
            cout<<p.top()<<" ";
        }

        cout<<endl;
    }
}
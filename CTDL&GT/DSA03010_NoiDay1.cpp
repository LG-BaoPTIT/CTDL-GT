#include<bits/stdc++.h>

using namespace std;
int m=1e9+7;
int main(){
    int t;cin >> t;
    while(t--){
        int n; cin >> n;
        priority_queue<long long,vector<long long>,greater<long long> > q;
        int x;
        for(int i=0;i<n;i++){
            cin >>x;
            q.push(x);
        }
        long long kq=0;
        while(q.size()>1){
            int m1=q.top();q.pop();
            int m2=q.top();q.pop();
            int sum= (m1 + m2)%m;
            kq=(kq+sum)%m;
            q.push(sum);
        }
        cout << kq<< endl;
    }
    return 0;
}

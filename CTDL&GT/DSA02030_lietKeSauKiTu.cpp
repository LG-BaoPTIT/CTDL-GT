#include<bits/stdc++.h>
using namespace std;
vector<string> res;
int n,k;int arr[100];
void in(){
    for(int i=1;i<=k;i++){
        cout<<arr[i];
    }
    cout<<endl;
}
bool kt(){
	for(int i=1;i<k;i++){
		if(arr[i] > arr[i+1]){
			return false;
		}
	}
	return true;
}
void sover(){
    string s;
    for(int i=1;i<=k;i++){
        char c=arr[i]+64;
        s+=c;
    }
    res.push_back(s);
}
void Try(int i){
    for(int j=1;j<=n;j++){
        arr[i]=j;
        if(i==k) {
            if(kt()){
                sover();
            }
        }
        else Try(i+1);
    }
}
int main(){
        char c;
        cin >>c >>k;
         n=c-64;
        Try(1);
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<endl;
        }
    
    return 0;
}
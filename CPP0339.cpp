#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int t;cin >> t;
    getchar();
    while(t--){
        char str[100];
        cin.getline(str,100);
        int x=strlen(str),count_=0;
        for(int i=0;i<x;i++){
            for(int j=i+1;j<x;j++){
                if(str[i]==str[j]) count_++;
            }
        }
        cout<<x+count_<<endl;

    }
    return 0;
}
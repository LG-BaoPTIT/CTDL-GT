#include<iostream>
#include<string.h>
using namespace std;
int count(char s[]){
    int d=0;
   
    char *p=strtok(s," \n\t");
    while(p!=NULL){
        d++;
        p=strtok(NULL," \n\t");
    }
    return d;

}
int main(){
    int t;cin >> t;
    cin.ignore();
    while(t--){
        
        char s[1000]; cin.getline(s,999);
        cout<<count(s)<<endl;
    }
    return 0;
}
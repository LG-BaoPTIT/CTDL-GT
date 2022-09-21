#include<bits/stdc++.h>
#include<string.h>
using namespace std;
struct book
    {
        string str;
    };
bool SoSanh(string s1, string s2)
{

	if (s1.compare(s2) == 0)
	{
		return true;
	}

	return false;
}
int main(){
    int t;cin>>t;
    cin.ignore(); 

    struct book word[100];
    for(int i=0;i<t;i++){
        getline(cin,word[i].str); 
        
    }
    int count_=0;
    for(int j=0;j<t;j++){
        for(int k=j+1;k<t;k++){
            if(SoSanh(word[j].str,word[j].str)) count_++;
        }
    }
    
    cout << count_;
    return 0;
}
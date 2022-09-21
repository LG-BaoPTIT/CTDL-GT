#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s1[1000];cin.getline(s1,999);
    
    char s2[1000];cin.getline(s2,999);
   
  
   char *p=strtok(s1," \n\t");
    while(p!=NULL){
        char str[100];
        strcpy(str,p);
        if(strcmp(str,s2)!=0) cout<<p<<" ";
        p=strtok(NULL," \n\t");
    }


    return 0;
}

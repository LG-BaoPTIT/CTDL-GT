#include <bits/stdc++.h>
 using namespace std;
  int main() { 
      int N; cin>>N; 
      while(N--) { 
          int a; cin>>a; int C[a]; 
          for (int i=0; i<a; i++) cin>>C[i]; 
          int count=0; 
          int left=0,
          right=a-1;
           while(left<=right) {
                if (C[left]==C[right]) { left++; right--; } 
                else if (C[left]<C[right]) { left++; C[left]+=C[left-1]; count++; } 
                else { right--; C[right]+=C[right+1]; count++; } } 
                cout<<count<<endl; } }
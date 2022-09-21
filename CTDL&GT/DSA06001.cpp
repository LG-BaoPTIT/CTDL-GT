 #include<iostream>
 #include<algorithm>
 using namespace std;
    void nhap(int n,int arr[]){
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
    }
 int main(){
     int t;
     cin >> t;
     while(t--){

         int n;
         cin >> n;
         int arr[n],A[n],B[n],j=0,k=0;
         nhap(n,arr);
         sort(arr,arr+n,greater<int>());
         for(int i=0;i<n;i++){
             A[i]=arr[i];
         }
         sort(arr,arr+n);
         for(int i=0;i<n;i++){
             B[i]=arr[i];
         }
        
         for(int i=0;i<n;i++){
              if(i%2==0) cout << A[k++] << " ";
              else cout << B[j++] << " ";
        
         }
         cout << endl; 
        

     }

     return 0;
 }
 
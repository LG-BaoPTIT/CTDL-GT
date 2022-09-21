#include<iostream>
using namespace std;int g=-1;
void nhap(int a[],int n){
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
}
void sapxep(int arr[],int n){
    
     int i, key, j;
   for (i = 0; i < n; i++)
   {
       key = arr[i];
       j = i-1;
 
       /* Di chuyển các phần tử có giá trị lớn hơn giá trị 
       key về sau một vị trí so với vị trí ban đầu
       của nó */
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j--;
       }
       arr[j+1] = key;
        cout << "Buoc "<< i <<": ";
        for(int k=0;k<=i;k++){
            cout << arr[k]<<" ";
        }
        cout << endl;
   }
        
        
}

int main(){
    int n;cin>>n;
    int arr[n];
    nhap(arr,n);
    sapxep(arr,n);
    return 0;
}
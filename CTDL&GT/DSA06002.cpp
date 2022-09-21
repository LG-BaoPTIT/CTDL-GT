#include<iostream>
#include<math.h>
using namespace std;
void nhap(int n,int arr[]){
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
}
void ggtd(int n,int arr[],int B[],int x){
    for(int i=0;i<n;i++){
        B[i]=abs(arr[i]-x);
    }
}
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
 
// Hàm sắp xếp bubble sort
void bubbleSort(int arr[],int B[], int n)
{
    int i, j;
    bool haveSwap = false;
    for (i = 0; i < n-1; i++){
    // i phần tử cuối cùng đã được sắp xếp
        haveSwap = false;
        for (j = 0; j < n-i-1; j++){
            if (B[j] > B[j+1]){
                swap(B[j], B[j+1]);
                swap(arr[j],arr[j+1]);
                haveSwap = true; // Kiểm tra lần lặp này có swap không
            }
        }
        // Nếu không có swap nào được thực hiện => mảng đã sắp xếp. Không cần lặp thêm
        if(haveSwap == false){
            break;
        }
    }
}

void xuat(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        /* code */
        int n,x;cin >> n >> x;
        int arr[n],B[n];
        nhap(n,arr);
        ggtd(n,arr,B,x);
        bubbleSort(arr,B,n);
        xuat(arr,n);
    }
    

    return 0;
}

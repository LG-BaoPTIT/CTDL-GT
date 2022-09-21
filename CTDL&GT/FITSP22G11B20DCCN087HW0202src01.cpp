#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
float A[1000][5];

void timmin(){
    int min_=100;int t=0;
    for(int i=100;i>0;i--){
        if(A[i][1]<=min_) {
            min_=A[i][1];
            t=i;
        }
    }   
    cout<<"H(X)min =  "<<min_<<" Tai vi tri p= "<<A[t][0] <<endl;
}
void timmax(){
    int max_=0;int t;
    for(int i=1;i<=100;i++){
        if(A[i][1]>=max_) {
            max_=A[i][1];
            t=i;
        }
    }
    cout<<"H(X)max =  "<<max_<<" Tai vi tri p= "<<A[t][0] <<endl;
}
void kq(){
     int g=1;
    A[0][0]=0;A[0][1]=0;
    A[100][0]=0;A[100][1]=0;
    cout << "p	" << "H(X)" << endl;
 for(float i=0;i<=1;i+=0.01){
        if(i==0||i==1){
            cout << setprecision(4) << fixed << i << "	";
			cout << "0" << endl;
			

        }
        else{
            A[g][1]=-i*(log(i)/log(2))-(1-i)*(log(1-i)/log(2));
            A[g][0]=i;
            cout << setprecision(4) << fixed << A[g][0] << "	";
			cout << setprecision(4) << fixed << A[g][1] << endl;
			g++;
        }

}
}
int main(){
    kq();
    timmin();
    timmax();	
    return 0;
}
   

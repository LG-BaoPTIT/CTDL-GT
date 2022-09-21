//TO_MAU_DO_THI.
#include<bits/stdc++.h>
using namespace std;

int n, Arr[25][25], color[25], x=0;
vector< pair<int,int> > v;

bool cmp(pair<int,int> a, pair<int,int> b) {
	return a.first>b.first;
}
//nhap du lieu 
void init(){ 
	cout<<"Nhap so dinh: ";
	cin>>n;
	cout<<"Nhap ma tran ke: "<<endl;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>Arr[i][j];
		}
	}
	cout<<"========================"<<endl;
}
 
void canPaint() {
	for (int i=1; i<=n; i++) { //vector luu tru cac dinh va so dinh ke voi no
		int x=0;
		for (int j=1; j<=n; j++) {
			if (Arr[i][j]) x++;
		}
		v.push_back({x,i});
	}
	 // sap xep cac dinh theo danh sach giam dan cua so dinh ke
	sort(v.begin(), v.end(), cmp);
	for (auto i:v) {
		int u=i.second;
		bool check;
		 //neu tai dinh u chua duoc to mau
		if (color[u]==0) {
			x++;
			color[u]=x;
			 // kiem tra cac dinh khong ke voi u da to mau chua
			for (int j=1; j<=n; j++) {
				if (color[j]==0 && Arr[u][j]==0) {
					check=true;
					for (int k=1; k<=n; k++) {
						// kiem tra cac dinh ke voi dinh j co duoc to mau du dinh se to cho dinh j khong
						if (Arr[k][j]==1  && color[k]==color[u]) { 
							check=false;
							break;
						}
					}
					if (check==true) color[j]=x;
				}
			}
		}
	}
}
//in ket qua ra man hinh
void outPut(){
	cout << "So mau can de to cac dinh do thi: " << x << endl;
    for(int i=1;i<=x;i++){
        cout << "Mau " << i << ": ";
        
        for(int j=1;j<=n;j++) {
        	if(color[j]==i) cout << j << " ";	
		}
        cout << endl;
    }
}
int main(){
    init(); //Ham nhap du lieu
    canPaint(); //Ham to mau
    outPut(); //Ham in ket qua
    return 0;
}
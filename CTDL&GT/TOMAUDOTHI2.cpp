#include<bits/stdc++.h>
using namespace std;
//structnode lưu trữ màu đỉnh và các cạnh kết nối với nút;
class node
{

	
public:
	int color = 1;
	set<int> edges;
};
vector<node> nodes(100);
void init(int graph[100][100],int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >>graph[i][j];
        }
    }

    for (int g = 1; g <= n; g++)
	{
		for(int h =1;h <= n;h++)
		{
			if(graph[g][h])
			{
				
				nodes[g].edges.push_back(h);
				nodes[h].edges.push_back(g);
			}
		}
	}
}
void canPaint(int n){
    int visited[100];
    memset(visited,0,sizeof(visited));
    int maxColors=1;
    //Sử dụng BFS tô màu toàn bộ các nút;
    for(int v=1;v<=n;v++){

        if(visited[v]) continue;

        visited[v]=1;
        queue<int> q;
        q.push(v);

        while(!q.empty()){

           int top=q.front();
           for(int i=nodes[top].edges.begin();i!=nodes[top].edges.end();i++){
               if(nodes[top].color==nodes[i].color) nodes[i].color++;
               maxColors= max(maxColors, max(nodes[top].color,nodes[i].color));

               if (!visited[i]) {
					visited[i] = 1;
					q.push(i);
				}
           }


        }
    }
    cout<< "SO MAU CAN DUNG IT NHAT: "<< maxColors <<endl;
    for(int i=1;i<=n;i++){
        cout<<"DINH "<< i <<"TO MAU"<<nodes[i].color;
        cout<<endl;
    }

}
    
int main(){
    int n;cin >>n;//Nhập số đỉnh của đồ thị;
    int graph[100][100];//Mangr 2 chiều lưu trữ ma trận kề
    init(graph,n);//Nhập ma trận kề+ khởi tạp danh sách kề với màu của nút
    canPaint(n);


    return 0;
}
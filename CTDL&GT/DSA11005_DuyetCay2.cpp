#include<bits/stdc++.h>
using namespace std;
struct node
{
    /* data */
    int data;
    node *left;
    node *right;
    node(int x){
        this->data=x;
        left=right=NULL;
    }
};
int find(int *a,int n,int x){
    for(int i=0;i<n;i++){
        if(a[i]==x) return i;
    }
    return -1;
}
void addNode(int n,int *ino,int *lev,node **root){
    (*root)=new node(lev[0]);
    int key=find(ino,n,lev[0]);
    int llev[key],rlev[n-1-key],x=0,y=0;
    for(int i=1;i<n;i++){
        if(find(ino,n,lev[i])>key) rlev[x++]=lev[i];
        else llev[y++]=lev[i];
    }
    if(key>0)addNode(key,ino,llev,&(*root)->left);
    if(n-1-key>0)addNode(n-1-key,ino+1+key,rlev,&(*root)->right);
}
void postorder(node *root){
    if(root!=NULL){
        if(root->left!=NULL) postorder(root->left);
        if(root->right!=NULL) postorder(root->right);
        cout<<root->data<<" ";
    }
}

int main(){
    int t;cin >>t;
    while(t--){
        int n;cin>>n;
        int ino[n+1],lev[n+1];
        for(int i=0;i<n;i++) cin >>ino[i];
        for(int i=0;i<n;i++) cin >>lev[i];
        node *root=NULL;
        addNode(n,ino,lev,&root);
        postorder(root);
        cout<<endl;
    }

    return 0;
}
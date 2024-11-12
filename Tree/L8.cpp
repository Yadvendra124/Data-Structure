#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node*left;
    struct node*right;
    node(int val){
        data=val;
        left=right=NULL;
    }
};
//LEVEL ORDER
vector<int> levelorder(node*root){
    queue<node*>q;
    vector<int>ans;
    q.push(root);
    if(root==NULL) return ans;
    while(!q.empty()){
        node*temp=q.front();
        q.pop();
        ans.push_back(temp->data);
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }

    }
    return ans;
}
int main(){
    node*root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    vector<int> result = levelorder(root);
    for(int val:result){
        cout<<val<<" ";
    }

}
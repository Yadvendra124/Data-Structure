#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node*left;
    struct node*right;
    node(int value){
        data=value;
        left=right=NULL;
    }
};
void post(node*root,vector<int>&ans){
    if(root==NULL) return;
    post(root->left,ans);
    post(root->right,ans);
    ans.push_back(root->data);
}
vector<int> postoder(node*root){
    vector<int> ans;
    post(root,ans);
    return ans;
}
int main(){
    node*root=new node(1);
    root->left= new node(2);
    root->right= new node(3);
    root->left->left=new node(4);
    root->left->left->left=new node(5);
    root->left->left->right=new node(6);
    vector<int>result=postoder(root);
    for(int val:result){
        cout<<val<<" ";
    }
}
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node*left;
    struct node*right;
    node(int value){
        data = value;
        left=right=nullptr;
    }
};
void pre(node*root,vector<int>&ans){
    if(root==nullptr) return;
    ans.push_back(root->data);
    pre(root->left,ans);
    pre(root->right,ans);
}
vector<int> preoder(node*root){
    vector<int> ans;
    pre(root,ans);
    return ans;
}
int main(){
    node*root=new node(5);
    root->left=new node(6);
    root->right=new node(10);
    root->left->left=new node(2);
    root->left->right=new node(3);
    root->left->right->right=new node(9);
    vector<int> result = preoder(root);
    for(int val : result){
        cout<<val<<" ";
    }
    return 0;
}
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
void IN(node*root,vector<int>&ans){
    if(root==NULL) return;
    IN(root->left,ans);
    ans.push_back(root->data);
    IN(root->right,ans);
    
}
vector<int> Inoder(node*root){
    vector<int> ans;
    IN(root,ans);
    return ans;
}
int main(){
    node*root=new node(1);
    root->left= new node(2);
    root->right= new node(3);
    root->left->left=new node(4);
    root->left->left->left=new node(5);
    root->left->left->right=new node(6);
    vector<int>result=Inoder(root);
    for(int val:result){
        cout<<val<<" ";
    }
}
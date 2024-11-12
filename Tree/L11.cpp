#include<bits/stdc++.h>
using namespace std;
struct node{
    int data ;
    struct node*left;
    struct node*right;
    node(int val){
        data = val;
        left = right = NULL;
    }
};
vector<int> postorderTraversal(node*root){
    vector<int> postorder;
    if(root==NULL) return postorder;
    stack<node*>st1,st2;
    st1.push(root);
    while(!st1.empty()){
        root=st1.top();
        st1.pop();
        st2.push(root);
        if(root->left!=NULL){
            st1.push(root->left);
        }
        if(root->right!=NULL){
            st1.push(root->right);
        }
    }
    while(!st2.empty()){
        postorder.push_back(st2.top()->data);
        st2.pop();
    }
    return postorder;
}
int main(){
    node*root=new node(5);
    root->left=new node(6);
    root->right=new node(10);
    root->left->left=new node(2);
    root->left->right=new node(3);
    root->left->right->right=new node(9);
    vector<int> result = postorderTraversal(root);
    for(int val : result){
        cout<<val<<" ";
    }
    return 0;
}
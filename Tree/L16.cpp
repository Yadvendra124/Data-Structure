#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int data;
    struct TreeNode*left;
    struct TreeNode*right;
    TreeNode(int val){
        data=val;
        left=right=NULL;
    }
};
int calculateHeight(TreeNode*root,int&diameter){
    if(root==NULL) return 0;
    
    int lh = calculateHeight(root->left,diameter);
    int rh = calculateHeight(root->right,diameter);
    diameter=max(diameter,lh+rh);
    return 1+max(lh,rh);
}
int diameterofTree(TreeNode*root){
    int diameter = 0;
    calculateHeight(root,diameter);
    return diameter;
}
int main(){
    TreeNode*root=new TreeNode(5);
    root->left=new TreeNode(6);
    root->right=new TreeNode(10);
    root->left->left=new TreeNode(2);
    root->left->right=new TreeNode(3);
    root->left->right->right=new TreeNode(9);
    cout<<diameterofTree(root->left);
}
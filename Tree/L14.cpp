#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int data ;
    struct TreeNode*left;
    struct TreeNode*right;
    TreeNode(int val){
        data=val;
        left=right=NULL;
    }
};
//recursive
int height(TreeNode*root){
    if(root==NULL) return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    return 1+max(lh,rh);
}
//LevelOrder
int maxDepth(TreeNode*root){
    int depth =0;
    if(root==NULL) return depth;
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        depth++;
        for(int i=0;i<size;i++){
            TreeNode*temp=q.front();
            q.pop();
            if(temp->left!=NULL)q.push(temp->left);
            if(temp->right!=NULL)q.push(temp->right);
        }
    }
    return depth;
}

int main(){
    TreeNode*root=new TreeNode(5);
    root->left=new TreeNode(6);
    root->right=new TreeNode(10);
    root->left->left=new TreeNode(2);
    root->left->right=new TreeNode(3);
    root->left->right->right=new TreeNode(9);
    cout<<"Depth of Binary Tree : "<<maxDepth(root);
}
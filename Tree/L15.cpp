#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int data;
    struct TreeNode*left;
    struct TreeNode*right; 
    TreeNode(int val){
        data = val;
        left=right=NULL;
    }
};
//Time complexity O(N2)
int getHeight(TreeNode*root){
    if(root==NULL) return 0;
    int lh=getHeight(root->left);
    int rh=getHeight(root->right);
    return max(lh,rh)+1;

}
bool checkbalanced(TreeNode*root){
    if(root==NULL)return true;
    int lh = getHeight(root->left);
    int rh = getHeight(root->right);
    if(abs(lh-rh)<=1&&checkbalanced(root->left)&&checkbalanced(root->right)) return true;
    return false;
}
//Time complexity O(N)
int dfsheight(TreeNode* root) {
    if (root == NULL) return 0;
    int leftHeight = dfsheight(root->left);
    if (leftHeight == -1) return -1;
    int rightHeight = dfsheight(root->right);
    if (rightHeight == -1) return -1;
    if (abs(leftHeight - rightHeight) > 1) return -1;
    return max(leftHeight, rightHeight) + 1;
}
bool isbalanced(TreeNode* root) {
    return dfsheight(root) != -1;
}

int main(){
    TreeNode*root=new TreeNode(5);
    root->left=new TreeNode(6);
    root->right=new TreeNode(10);
    // root->right->left=new TreeNode(11);
    root->left->left=new TreeNode(2);
    root->left->left->left=new TreeNode(4);
    // root->left->right=new TreeNode(3);
    // root->left->right->right=new TreeNode(9);
    if(isbalanced(root)){
        cout<<"Tree is balanced"<<endl;
    }else{
        cout<<"Tree is not balanced"<<endl;
    }
}

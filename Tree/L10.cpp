#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node*left;
    struct node*right;
    node(int val){
        data = val;
        left=right=NULL;
    }
};
vector<int> inorder(node*root){
    stack<node*> st;
    node*r=root;
    vector<int>Inorder;
    while(true){
        if(r!=NULL){
            st.push(r);
            r=r->left;
        }
        else{
            if(st.empty()==true) break;
            r=st.top();
            st.pop();
            Inorder.push_back(r->data);
            r=r->right;

        }
    }
    return Inorder;
}
int main(){
    node*root=new node(5);
    root->left=new node(6);
    root->right=new node(10);
    root->left->left=new node(2);
    root->left->right=new node(3);
    root->left->right->right=new node(9);
    vector<int> result = inorder(root);
    for(int val : result){
        cout<<val<<" ";
    }
    return 0;
}
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
vector<vector<int>> order(node*root){
    stack<pair<node*,int>>st;
    st.push({root,1});
    vector<int> pre,post,in;
    if(root==NULL) return {pre,post,in};
    while(!st.empty()){
        auto it = st.top();
        st.pop();
        if(it.second==1){
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->left!=NULL){
                st.push({it.first->left,1});
            }
        }
        else if(it.second==2){
            in.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->right!=NULL){
                st.push({it.first->right,1});
            }
        }
        else{
            post.push_back(it.first->data);
        }
    }
    return {pre,post,in};
}
int main(){
    node*root=new node(5);
    root->left=new node(6);
    root->right=new node(10);
    root->left->left=new node(2);
    root->left->right=new node(3);
    root->left->right->right=new node(9);
    vector<vector<int>> result = order(root);
    for(int i=0;i<result.size();i++){
        for(int val:result[i]){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}
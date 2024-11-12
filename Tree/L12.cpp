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
vector<int> PostOrder(node*root){
    vector<int> post;
    stack<node*>st;
    node*curr=root;
    while(curr!=NULL||!st.empty()){
        if(curr!=NULL){
            st.push(curr);
            curr=curr->left;
        }
        else{
            node*temp=st.top()->right;
            if(temp==NULL){
                temp=st.top();
                st.pop();
                post.push_back(temp->data);
                while(!st.empty()&&temp==st.top()->right){
                    temp=st.top();
                    st.pop();
                    post.push_back(temp->data);
                }
            }
            else{
                curr=temp;
            }
        }
    }
    return post;
}
int main(){
    node*root=new node(5);
    root->left=new node(6);
    root->right=new node(10);
    root->left->left=new node(2);
    root->left->right=new node(3);
    root->left->right->right=new node(9);
    vector<int> result = PostOrder(root);
    for(int val : result){
        cout<<val<<" ";
    }
    return 0;
}


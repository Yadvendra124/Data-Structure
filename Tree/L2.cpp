#include<iostream>
using namespace std;
struct node{
    int data ;
    struct node*left;
    struct node*right;
    node(int value){
        value = data;
        left=right=NULL;
    }
};
int main(){
    node*root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->right->left = new node(4);

}
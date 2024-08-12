#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node*next;
    public:
    Node(int data1,Node* next1){
        data= data1;
        next = next1;
    }
    public:
    Node(int data1){
        data = data1;
        next=nullptr;

    }
};
Node*convertArr2all(vector<int>&arr){
    Node*head = new Node(arr[0]);
    Node*mover = head;
    for(int i=1;i<arr.size();i++){
        Node*temp = new Node(arr[i]);
        mover->next=temp;
        mover = temp;
        }
    return head;
}
int lengthofLL(Node*head){
    int count = 0;
    Node*temp=head;
     while(temp){
        
        temp = temp->next;
        count++;
    }
    return count++;
}
int checkIfpresent(Node*head,int value){
    Node*temp=head;
     while(temp){
        if(temp->data == value)return 1;
        temp = temp->next;
        
    }
    return 0;
}


int main(){
    vector<int>arr={12,3,4,5};
    
    Node*head = convertArr2all(arr);
   cout<<checkIfpresent(head,7);
}
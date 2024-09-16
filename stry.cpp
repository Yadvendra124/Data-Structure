#include<bits/stdc++.h>
using namespace std;
struct node{
    public:
    int data;
    node*next;
    public:
    node(int data1,node*next1){
        data = data1;
        next = next1;
    }
    public:
    node(int data1){
        data = data1;
        next = nullptr;
    }

};
node*convertArr2LL(vector<int>&arr){
    node*head = new node(arr[0]);
    node*mover = head;
    for(int i=1;i<arr.size();i++){
        node*temp = new node(arr[i]);
        mover->next=temp;
        mover = mover->next;
    }
    return head;
}
int lengthofLL(node*head){
    int cnt = 0;
    node*temp = head;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;

}
int checkIfpresent(node*head,int val){
    node*temp = head;
    while(temp){
        if(temp->data==val) return 1;
        temp = temp->next;
        
    }
    return 0;

}
void print(node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head= head->next;
    }
}
node*removehead(node*head){
    if(head==NULL) return head;
    node*temp = head;
    head =head->next;
    delete temp;
    return head;
}
node*removetail(node*head){
    if(head->next==NULL||head==NULL) return NULL;
    node*temp=head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;

}
node*removeKthPOS(node*head,int k){
    if(head==NULL) return head;
    if(k==1) return removehead(head);
    if(k>=lengthofLL(head)) return removetail(head);
    int cnt = 0;
    node*temp =head;
    node*prev = NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            delete temp;
            break;
            
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
node*removevalue(node*head,int value){
    if(head==NULL) return head;
    if(head->data==value){
        node*temp = head;
        head=head->next;
        delete temp;
    }
    node*temp=head;
    node*prev= NULL;
    while(temp!=NULL){
        if(temp->data==value){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
node*inserthead(node*head,int val){
    node*temp = new node(val,head);
    return temp;
}
node*insertlast(node*head,int val){
    node*temp=head;
    if(temp==NULL) return new node(val);
    while(temp->next!=NULL){
        temp=temp->next;
    }
    node*newnode = new node(val);
    temp->next=newnode;
    return head;
    
}
node*insertKthPOS(node*head,int val,int pos){
    if(head==NULL) return new node(val);
    if(pos==1) return inserthead(head,val);
    if(pos>lengthofLL(head)) return insertlast(head,val);
    int cnt = 0;
    node*temp = head;
    node*newnode = new node(val);
    while(temp != NULL){
        cnt++;
        if(cnt==pos-1){
           newnode->next=temp->next;
           temp->next=newnode;
           break;
            

        }
        temp=temp->next;

    }
    return head;

}
node*insertValue(node*head,int val,int el){
    if(head==NULL){
        return NULL;
    }
    if(head->data==val){
        return new node(el,head);
    }
    node*temp = head;
    while(temp->next!=0){
        if(temp->next->data==val){
        node*x = new node(el,temp->next);
        temp->next=x;
        break;
        }
        temp=temp->next;
    }
}
// node *insertInMiddle(node *head, int x) {
//     int count=0;
//     node*temp=head;
//     while(temp!=NULL)  //Count the total no. of nodes
//     {
//         count++;
//         temp=temp->next;
//     }
//     if(count%2!=0)    //Odd count of nodes
//     {
//         int a=count/2;
//         a=a+1;        //Insertion should be done after 'a'th node
//         temp=head;
//         for(int i=1;i<a;i++)
//         {
//             temp=temp->next;
//         }
//         node*newnode=new node(x);
//         newnode->next=temp->next;
//         temp->next=newnode;
//         return head;
//     }
//     else               //Even count of nodes
//     {
//         int a=count/2; //Insertion should be done after 'a'th node
//         temp=head;
//         for(int i=1;i<a;i++)
//         {
//             temp=temp->next;
//         }
//         node*newnode=new node(x);
//         newnode->next=temp->next;
//         temp->next=newnode;
//         return head;
//     }
//     }

int main(){
    vector<int>arr = {2,5,8,7};
    // node*y = new node(arr[0],nullptr);
    // cout<<y->data;
    node*head = convertArr2LL(arr);
    // cout<<head->data<<" ";
    // node*temp = head;
    // while(temp){
    //     cout<<temp->data<<" ";
    //     temp = temp->next;
    // }
    // cout<<lengthofLL(head);
    // cout<<checkIfpresent(head,8);
    // head = removevalue(head,2);
    // print(head);
    head = insertValue(head,5,4);
    print(head);
}
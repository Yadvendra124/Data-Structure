#include<iostream>
using namespace std;
struct node{
    int v;
    node * next;

};
class Linkedlist{
    node*start;
    public:
    Linkedlist(){start=NULL;}
    void addatbegin(int x){
        node *t;
        t=new node;
        t->v=x;
        t->next=NULL;
        if(start==NULL){start=t;}
        else{
            t->next=start;
            start = t;
        }
    }
    void display(){
        node*temp;
        temp=start;
        while (temp!=NULL){
            cout<<temp->v<<" ";
            temp=temp->next;
        }
        
        
    }

};
int main(){
    Linkedlist l;
    l.addatbegin(10);
    l.addatbegin(15);
    l.display();
    l.addatbegin(30);
    l.display();
}
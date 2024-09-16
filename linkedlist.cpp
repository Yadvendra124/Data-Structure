#include<iostream>
using namespace std;
struct node{
    char c;
    node*next;
};
class linkedlist2{
    node*start,*end;
    public:
    linkedlist2(){start=end=NULL;}
    void addatbegin(char x){
        node *t;
        t=new node;
        t->c=x;
        t->next=NULL;
        if(start==NULL){
            start=t;
            end=t;
        }
        else{
            t->next=start;
            start=t;
        }
    }
    void append(char x){
        node*t=new node;
        t->c=x;t->next=NULL;
        if(start == NULL){
            start =t;
            end=t;
        }
        else{
            end->next=t;
            end=t;
        }
    }
};

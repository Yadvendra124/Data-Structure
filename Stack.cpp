#include<iostream>
using namespace std;
//Static Implementation
class Stack{
    int d[20];
    int top ;
    public:
    Stack(){top=-1;}
    void push(int x){
        if(top==19){
            cout<<"FULL";
            return;
        }
        d[++top]=x;
    }
    int pop(){
        if(top==-1){return -1;}
        return d[top--];
    }
    int peek(){
        if(top==-1){return -100000;}
        return d[top];
    }
};
//Dynamic Impletation
struct node{
    int v;
    node*next;

    };
class LinkedList{
    node*start;
    public:
    LinkedList(){start = NULL;}
    void addatbegin(int x){
        node*t;
        t=new node;
        t->v=x;
        t->next=NULL;
        if(start==NULL){start = t;}
        else{
            t->next=start;
            start = t;
        }
    }
    int removefirst(){
        if(start == NULL){
            cout<<"Empty";
            return -1;
        }
        node*t;
        t=start;
        int c = t->v;
        start = start->next;
        delete t;
        return c;

    }
};
class Stack1{
    LinkedList l;
    public:
    void push(int x){
        l.addatbegin(x);
    }
    int pop(){
        l.removefirst();
    }
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    int x = s.pop();
    cout<<x;
//-----------------
    Stack1 s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    int y = s1.pop();
    cout<<y;

}
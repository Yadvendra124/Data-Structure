#include<iostream>
using namespace std;
struct node{
    int v;
    node*next;
};
class linkedlist{
    node*start;
    public :
    linkedlist(){start=NULL;}
    void addatbegin(int x){
        node*t;
        t=new node;
        t->v=x;
        t->next=NULL;
        if(start==NULL){start = t;}
        else{
            t->next=start;
            start=t;
        }
    }
    void display(){
        node*temp;
        temp = start;
        while(temp!=NULL){
            cout<<temp->v<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void append(int x){
        node*t;
        t=new node;
        t->v=x;
        t->next=NULL;
        if(start == NULL){
            start = t;
            return;

        }
        node*temp;
        temp = start;
        while(temp->next!=NULL){temp = temp->next;}
        temp->next=t;
    }
    int getLength(){
        if(start==NULL){return 0;}
        node*temp = start;
        int l=0;
        while(temp!=NULL){
            l++;
            temp = temp->next;
        }
        return l;
    }
    void addatPOS(int x, int POS){
        node*t=new node;
        t->v=x;
        t->next=NULL;
        if(POS<=1){addatbegin(x);return;}
        if(POS+1>getLength()){cout<<"ERROR ";return;}
        node*temp=start;
        for(int i=1;i<POS;i++)temp = temp->next;
        t->next=temp->next;
        temp->next=t;
    }
    //for remove operation
    int removefirst(){
        if (start == NULL){cout<<"Empty";return -1;}
        node*t;
        t=start;int c = start->v;
        start=start->next;
        delete t;
        return c;
    }
    int removelast(){
        if(start==NULL){
            return -1;
        }
        if(start->next==NULL){
            return removefirst();
        }
        else{
            node*temp=start;
            while(temp->next->next!=NULL)
            temp = temp->next;
            node*t=temp->next;
            int c = t->v;
            temp->next=NULL;
            delete t;
            return c;
        }
    }
    int removeNTH(int POS){
        if(POS == 1)return removefirst();
        int n = getLength();
        if (POS==n)return removelast();
        node*temp=start;
        for(int i=0;i<POS;i++){
            temp = temp->next;

        }
        int c = temp->next->v;
        node*t = temp->next->next;
        delete t;
        return c;

    }

};
int main(){
    linkedlist l;
    l.addatbegin(10);
    l.addatbegin(15);
    l.display();
    l.addatbegin(30);
    l.display();
    l.append(20);
    l.display();
    cout<<l.getLength()<<endl;
    l.addatPOS(18,2);
    l.display();
    cout<<l.removefirst()<<endl;
    l.display();
    cout<<l.removelast()<<endl;
    l.display();
    cout<<l.removeNTH(1)<<endl;
    l.display();

}
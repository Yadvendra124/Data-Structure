#include<bits/stdc++.h>
using namespace std;
//Implement Stack with the help of array
class Stack {
  int size;
  int * arr;
  int top;
  public:
    Stack() {
      top = -1;
      size = 1000;
      arr = new int[size];
    }
  void push(int x) {
    top++;
    arr[top] = x;
  }
  int pop() {
    int x = arr[top];
    top--;
    return x;
  }
  int Top() {
    return arr[top];
  }
  int Size() {
    return top + 1;
  }
};
//Implement Quene with the help of array
class Quene{
  int size;
  int * arr;
  int currSize;
  int Start ;
  int end;
  public:
  Quene(){
    Start = -1;
    end = -1;
    size = 5;
    arr = new int[size];
    currSize = 0;
  }
  void push(int x){
    if(currSize>=size){
      cout<<"Quene is full "<<endl;
      return;
    }
    if(end==-1){
      Start++;
      end++;
      arr[end]=x;
      currSize++;
    }
    else{
      end++;
      arr[end]=x;
      currSize++;
    }
  }
  int pop(){
    if(Start == -1){
      cout<<"Empty Quene "<<endl;
      return -1;
    }
    if(Start>=end){
      cout<<"Quene is empty "<<endl;
      return -1;
    }
    
    int popped = arr[Start];
    Start++;
    currSize--;
    
    return popped;

  }
  int top(){
    if(Start==-1){
      cout<<"Empty"<<endl;
      return -1;

    }
    int topped = arr[Start];
    return topped;
  }
  int sizes(){
    return end - Start+1;
  }
  
};
// Implemnent stack with the help of Quene
class QuenetoStack
{
private:
  /* data */
  queue<int> q;
public:
  void push(int x){
    int s = q.size();
    q.push(x);
    for(int i=0;i<s;i++){
      q.push(q.front());
      q.pop();
    }
  }
  int pop(){
    int n = q.front();
    q.pop();
    return n;
  }
  int top(){
    return q.front();
  }
  int size(){
    return q.size();
  }
};

//Leetcode
class MyStack {
public:
    queue<int> main;
    queue<int> tmp;
    MyStack() {
        
    }
    
    void push(int x) {
        while (!main.empty()) {
            tmp.push(main.front());
            main.pop();
        }
        main.push(x);
        while(!tmp.empty()) {
            main.push(tmp.front());
            tmp.pop();
        }
    }
    
    int pop() {
        int res = main.front();
        main.pop();

        return res;
    }
    
    int top() {
        return main.front();
    }
    
    bool empty() {
        return main.empty();
    }
};
//Implement Quene with the help of stack
class StacktoQuene{
  public:
  stack <int> input,output;
  void push(int x){
    while(!input.empty()){
      output.push(input.top());
      input.pop();
    }
    input.push(x);
    while(!output.empty()){
      input.push(output.top());
      output.pop();
    }
  }
  int pop(){
    if(input.empty()){
      cout<<"Empty Stack "<<endl;
      return -1;
    }
    int n = input.top();
    input.pop();
    return n;
  }
  int top(){
    if(input.empty()){
      cout<<"Empty Stack "<<endl;
      return -1;

    }
    return input.top();
  }
  int size(){
    return input.size();
  }
};
//Implemation Stack using Linked list
struct StructNode
{

  /* data */
  int data ;
  StructNode*next;
  int size;
  StructNode(int x){
    data = x;
    next = NULL;
  }
};
class Stacks{
  public:
  StructNode*top;
  int size;
  Stacks(){
    top=NULL;
    size=0;
  }
  void push(int x){
        StructNode*element = new StructNode(x);
        element->next=top;
        top=element;
        size++;
  }
  int pop(){
    if(top==NULL){
      cout<<"Empty Stack"<<endl;
      return -1;
    }
    int topData = top->data;
    StructNode*temp=top;
    top = top->next;
    delete temp;
    size--;
    return topData;
  }
  int tops(){
    if(top==NULL){
      cout<<"Empty Stack"<<endl;
      return -1;
    }
    int n = top->data;
    return n;
  }
  int sizes(){
    return size;
  }
};
//Implement Quene using Linked List
struct QueneNode{
  int val;
  QueneNode*next;
  QueneNode(int data){
    data = val;
    next = nullptr;
  }
};
QueneNode*front=nullptr;
QueneNode*rare=nullptr;
class Quenes{
  public:
  int size = 0;
  bool empty(){
    return front == NULL;
  }
  int top(){
    if(front==NULL){
      return -1;
    }
    return front->val;
  }
  void push(int x){
    QueneNode *Temp;
    Temp = new QueneNode(x);
    if(Temp==nullptr){
      cout<<"Quene Full "<<endl;
    }
    else{
      if(front==nullptr){
        front = Temp;
        rare = Temp;
      }
      else{
        rare->next=Temp;
        rare=Temp;
      }
      size++;
    }
  }
  int pop(){
    if(front==nullptr){
      cout<<"Quene is Empty "<<endl;
    }
    else{
      cout<<front->val<<endl;
      QueneNode*Temp=front;
      front=front->next;
      delete Temp;
      size--;
    }
  }
  int sizes(){
    return size;
  }

};




int main() {

// Stack s;
//   s.push(6);
//   s.push(3);
//   s.push(7);
//   cout << "Top of stack is before deleting any element " << s.Top() << endl;
//   cout << "Size of stack before deleting any element " << s.Size() << endl;
//   cout << "The element deleted is " << s.pop() << endl;
//   cout << "Size of stack after deleting an element " << s.Size() << endl;
//   cout << "Top of stack after deleting an element " << s.Top() << endl;
//   return 0;
// Quene q;
// q.push(5);
// q.push(6);
// q.push(7);
// q.push(8);
// q.push(9);
// cout<<q.top()<<endl;
// cout<<q.pop()<<endl;
// cout<<q.sizes()<<endl;
// QuenetoStack st;
// st.push(5);
// st.push(6);
// st.push(7);
// st.push(8);
// st.push(9);
// cout<<st.top()<<endl;
// cout<<st.pop()<<endl;
// cout<<st.top()<<endl;
// cout<<st.size()<<endl;
// StacktoQuene sq;
// sq.push(10);
// sq.push(9);
// sq.push(8);
// sq.push(7);
// sq.push(6);
// sq.push(5);
// sq.push(4);
// cout<<sq.pop()<<endl;
// cout<<sq.top()<<endl;
// cout<<sq.pop()<<endl;
// cout<<sq.top()<<endl;
// cout<<sq.size()<<endl;
Stacks s;
s.push(10);
s.push(9);
s.push(8);
s.push(7);
s.push(6);
s.push(5);
cout<<s.tops()<<endl;
cout<<s.pop()<<endl;
cout<<s.tops()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
cout<<s.tops()<<endl;
cout<<s.sizes()<<endl;









}
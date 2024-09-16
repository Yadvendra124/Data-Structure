#include<bits/stdc++.h>
using namespace std;
// class Stack {
//   int size;
//   int * arr;
//   int top;
//   public:
//     Stack() {
//       top = -1;
//       size = 1000;
//       arr = new int[size];
//     }
//   void push(int x) {
//     top++;
//     arr[top] = x;
//   }
//   int pop() {
//     int x = arr[top];
//     top--;
//     return x;
//   }
//   int Top() {
//     return arr[top];
//   }
//   int Size() {
//     return top + 1;
//   }
// };
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
Quene q;
q.push(5);
q.push(6);
q.push(7);
q.push(8);
q.push(9);
cout<<q.top()<<endl;
cout<<q.pop()<<endl;
cout<<q.sizes()<<endl;



}
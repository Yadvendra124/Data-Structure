#include<bits/stdc++.h>
using namespace std;
void name(int i, int n){
    if(i>n) return;
    cout<<"Yadvendra";
    name(i+1,n);

}
void print1toN(int i,int N){
    if(i>N)
    return;
    cout<<i<<" ";
    print1toN(i+1,N);
}
void printNto1(int i,int N){
    if(i<1)
    return;
    cout<<i<<" ";
    printNto1(i-1,N);
}

void print(int N){
    if(N<1) return;
    cout<<N<<" ";
    print(N-1);
}
//Backtracking
void printoN(int i ,int N){
    if(i>N)return;
    printoN(i+1,N);
    cout<<i<<" ";


}
int main(){
    int n;
    cin>>n;
    // print(n);
    printoN(1,n);
    

}
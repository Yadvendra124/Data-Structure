//reverse of array
#include<bits/stdc++.h>
using namespace std;
void reverseArray(int l,int n,int arr[]){
    if(l>=n) return;
    swap(arr[l],arr[n]);
    reverseArray(l+1,n-1,arr);


}
void printReverse(int i, int n,int arr[]){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    printReverse(i+1,n,arr);


}
//check if palidrome
bool chechpalidrome(int i, string &s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return chechpalidrome(i+1,s);
}
int main(){
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // // reverseArray(0,n-1,arr); 
    // printReverse(0,n,arr);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }   
    string s;
    cin>>s;
    cout<<chechpalidrome(0,s);
}
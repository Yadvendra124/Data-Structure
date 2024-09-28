#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    if(n==1)
    return;
    int count = 0;
    for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
        count++;
    }
    }
    if(count==0) return;
    bubblesort(arr,n-1);
    
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    bubblesort(arr,n);
    cout<<"Bubble Sort "<<endl;
    printArray(arr,n);
}
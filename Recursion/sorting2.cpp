//Recursion
#include<bits/stdc++.h>
using namespace std;
//bubble sort
void bubblesort(int arr[],int n){
    if(n==1) return;
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
//Merge sort
void merge(vector<int> &arr,int low,int mid,int high){
    vector<int> a;
    int left = low;
    int right = mid+1;
    while(left<=mid&&right<=high){
        if(arr[left]<=arr[right]){
            a.push_back(arr[left]);
            left++;
        }
        else{
            a.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        a.push_back(arr[left]);
        left++;

    }
    while(right<=high){
        a.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=a[i-low];
    }
}
void mergesort(vector<int> &arr,int low,int high){
   
    if(low>=high)return;
    int mid=(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);



}
int main(){
    vector<int> arr = {2,5,1,8,3};
    int n = 5;
    mergesort(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
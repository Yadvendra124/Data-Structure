#include<bits/stdc++.h>
using namespace std;
//selection sort
void selectionsort(int arr[],int n){
    for(int i=0;i<n-2;i++){
        int min = i;
        for(int j=i;j<n-1;j++){
            if(arr[j]<arr[min]) min=j;
        }
        int temp= arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}
//bubble sort
void bubblesort(int arr[],int n){
    for(int i=n-1;i>0;i--){
        int didswap=0;
        for(int j=0;j<i;j++){
          if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1]=temp;
            didswap=1;
          }
          if(didswap=0) break;
        }
    }
}
//insertation sort
void insertsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
}
int main(){
    int n = 5;
    int arr[] = {5,2,4,1,9};
    insertsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
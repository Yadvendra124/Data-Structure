#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr,int low ,int high){
    int pviot = arr[low];
    int i=arr[low];
    int j=arr[high];
    while(i<j){
        while(arr[i]<=pviot && i<=high-1){
            i++;
        }
        while(arr[j]>pviot&&j>=low+1){
            j++;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void qs(vector<int>&arr,int low,int high){
    if(low<high){
        int PIindex = partition(arr,low,high);
        qs(arr,low,PIindex-1);
        qs(arr,PIindex+1,high);
    }
}
vector<int> quickSort(vector<int> arr){
    qs(arr,0,arr.size()-1);
    return arr;
}
int main()
{
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = arr.size();

    arr = quickSort(arr);
    cout << "After Using quick sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
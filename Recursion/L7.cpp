#include<bits/stdc++.h>
using namespace std;
void SumofSub(int ind,vector<int>&ds,int arr[],int n, int sum, int s){
    if(ind==n){
        if(sum==s){
            for(auto it : ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    ds.push_back(arr[ind]);
    s+=arr[ind];
    SumofSub(ind+1,ds,arr,n,sum,s);
    s-=arr[ind];
    ds.pop_back();
    SumofSub(ind+1,ds,arr,n,sum,s);

}
//print one subsequence
bool SumofoneSub(int ind,vector<int>&ds,int arr[],int n, int sum, int s){
    if(ind==n){
        if(sum==s){
            for(auto it : ds){
                cout<<it<<" ";
            }
            cout<<endl;
            return true;
        }
        return false;
    }
    ds.push_back(arr[ind]);
    s+=arr[ind];
    if(SumofoneSub(ind+1,ds,arr,n,sum,s)==true) return true;
    s-=arr[ind];
    ds.pop_back();
    if(SumofoneSub(ind+1,ds,arr,n,sum,s)==true)return true;
    return false;

}
int Sumofcont(int ind,int arr[],int n, int sum, int s){
    if(ind==n){
        if(sum==s){
            
            return 1;
        }
        return 0;
    }

    s+=arr[ind];
    int l = Sumofcont(ind+1,arr,n,sum,s);
    s-=arr[ind];
    int r = Sumofcont(ind+1,arr,n,sum,s);
    return l+r;

}
int main(){
    int arr[] = {1,2,1};
    vector<int>ds;
    int sum = 2;
    int n = 3;
    cout<<Sumofcont(0,arr,n,sum,0);

}
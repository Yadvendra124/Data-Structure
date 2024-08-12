#include<bits/stdc++.h>
using namespace std;
int printLast(int n){
    
    
        int count ;
        while(n>0){
        int lastdigit = n%10;
        count++;
        n = n/10;
    
    }
    cout<<count;
}


int main(){
    int n;
    cin>>n;
    cout<<printLast(n)<<endl;

}
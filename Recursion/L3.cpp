#include<bits/stdc++.h>
using namespace std;
int sum(int N){
    if(N==0) return 0;
    return sum(N-1)+N;
}
int fact(int N){
    if(N==1) return 1;
    return N*fact(N-1);
}
//  vector<long long> factorialNumbers(long long n) {
//         if(n==1) return 1;
//     return n*factorialNumbers(n-1);
//     }
int fib(int n) {
      if(n==0)return 0;
      if(n==1)return 1;
      return fib(n-1)+fib(n-2);  
    }
int main(){
    int n;
    cin>>n;
    cout<<fib(n);

}
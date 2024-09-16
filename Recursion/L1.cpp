#include<bits/stdc++.h>
using namespace std;
int cnt =0;
void repat(){
    if(cnt==4){
        return ;
    }
    cout<<cnt<<endl;
    cnt++;
    repat();
    
}
int main(){
    repat();
}
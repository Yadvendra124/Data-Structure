#include<bits/stdc++.h>
using namespace std;

    bool balanced(string s){
        stack<char> st;
        for(auto it : s){
            if(it=='('||it=='{'||it=='['){
                st.push(it);
            }
            else{
                if(st.size()==0) return false;
                char ch = st.top();
                st.pop();
                
                if((it == ')' && ch == '(') ||  (it == ']' && ch == '[') || (it == '}' && ch == '{'))
                continue;
                else return false;
            }
        }
    }

int main(){
    string s;
    cin>>s;
    if(balanced(s)) cout<<"TRUE"<<endl;
    else cout<<"FALSE"<<endl;

}
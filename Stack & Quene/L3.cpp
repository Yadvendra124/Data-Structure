#include<bits/stdc++.h>
using namespace std;
int prec(char c){
    if(c=='^') return 3;
    else if(c=='*'||c=='/') return 2;
    else if(c=='+'||c=='-') return 1;
    else return -1;
}
string infixtopostfix(string s){
    stack<char> st;
    string result;
    for(int i=0;i<s.length();i++){
        char c = s[i];
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9')) result+=c;
        else if(c=='(') st.push('(');
        else if(c==')'){
            while(st.top()!='('){
                result+=st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty()&&prec(c)<=prec(st.top())){
                result+=st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty()){
        result+=st.top();
        st.pop();
    }
    return result;
}
string infixtoprefix(string s){
    reverse(s.begin(),s.end());
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            s[i]=')';
        }
        else if(s[i]==')'){
            s[i]='(';
        }
    }
    string prefix = infixtopostfix(s);
    reverse(prefix.begin(),prefix.end());
    return prefix;
}
string postfixtoinfix(string s){
    stack<string> st;
    for(int i=0;i<s.length();i++){
        char c = s[i];
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>=0&&c<=9)) st.push(string(1,c));
        else{
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();
            string t3 = '('+t2+s[i]+t1+')';
            st.push(t3);
        }
    }
    return st.top();
}
string prefixtoinfix(string s){
    reverse(s.begin(),s.end());
    stack<string> st;
    for(int i=0;i<s.length();i++){
        char c = s[i];
        if((c>='a'&&c<='z'||c>='A'&&c<='Z'||c>='0'&&c<='9')){
            st.push(string(1,c)); 
        }
        else{
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();
            string main = "("+t2+s[i]+t1+")";
            st.push(main);

        }
    }
    return st.top();
}
string postfixtoprefix(string s){
    stack<string> st;
    for(int i=0;i<s.length();i++){
        char c = s[i];
        if((c>='a'&&c<='z'||c>='A'&&c<='Z'||c>='0'&&c<='9')){
            st.push(string(1,c)); 
        }
        else{
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();
            string main = s[i]+t2+t1;
            st.push(main);

        }
    }
    return st.top();
}
string prefixtpostfix(string s){
    reverse(s.begin(),s.end());

    stack<string> st;
    for(int i=0;i<s.length();i++){
        char c = s[i];
        if((c>='a'&&c<='z'||c>='A'&&c<='Z'||c>='0'&&c<='9')){
            st.push(string(1,c)); 
        }
        else{
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();
            string main = t1+t2+s[i];
            st.push(main);

        }
    }

    return st.top();
}
int main(){
    string s;
    cin>>s;
    cout<<infixtoprefix(s)<<endl;

}
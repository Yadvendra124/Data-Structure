#include<bits/stdc++.h>
using namespace std ;
//pair is utlity libary
void explainPair(){
    pair<int,int>p = {1,3};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int ,pair<int,int>>p = {1,{2,3}};
    cout<<p.first<<" "<<p.second.second<<" "<<p.second.first<<endl;
    pair<int,int>arr[] = {{1,2},{2,3},{3,4},{4,5}};
    cout<<arr[1].second<<endl;
}
//Vector is Dynamic in Nature
void explainVector(){
     vector<int>v;  //{}
     vector.push_back(1);  //{1}
     vector.emplace_back(2); //{1,2}

     vector<pair<int,int>>v;
     vector.push_back({1,2});  //{{1,2}}
     vector.emplace_back(1,2); //{{1,2}{1,2}}  emplace understand that is pair
     vector<int> v(5,100);  //{100,100,100,100,100}
     vector<int> v(5);  //{0,0,0,0,0}
     vector<int> v1(5,20); //{20,20,20,20,20}
     vector<int> v2(v1); //copying v1
     
     
     //{20,10,5,3,2,}
     cout<<v[0];
     //{20,10,5,6,7}
     vector<int>::iterator it v.begin();
     it++;
     cout<<*(it)<<" "; //print 10 
     it+=2;
     cout<<*(it)<<" "; //print 6
     
     vector<int>::iterator it = v.end; //{20,10,5,6,7}_ print the last blank space value
     vector<int>::iterator it = v.rend; //{7,6,5,10,20}_ reverse whole and print lat blank sapace
     vector<int>::iterator it = v.rbegin; //{7,6,5,10,20} //print the 7
     cout<<v.back()<<" ";//{10,20,30} print the 30
      for(vector<int>::iterator it = v.begin();it!=v.end();it++){
        cout<<*(it)<<" "; // Print whole vector
      }
      for(auto it = v.begin();it!=v.end();it++){
        cout<<*(it)<<" "; // auto = vector<int>::iterator auto mean auto assign
      }
      for(auto it .v){
        cout<<it<<" ";
      }

      //{10,11,12,13}
      v.earse(v.begin()+1); //{10,12,13}
      //{10,20,12,30,35}
      v.earse(v.begin()+2,v.begin()+4); //{10,20,35}
       
       // Insert function
       vector<int>v{2,100}; //{100,100}
       v.insert(v.begin(),300); //{300,100,100}
       v.insert(v.begin()+1,2,10); //{300,10,10,100,100}
       vector<int>v1(2,50);//{50,50}
       v.insert(v.begin(),v1.begin(),v1.end()); //{50,50,300,10,10,100,100}
       //{10,20}
       cout<<v.size()<<" "; //size of vector 2
       v.pop_back(); //{10}
       //v1 -> {10,20}
       //v2 -> {30,40}
       v1.swap(v2); //swap v1 & v2
       //v2 -> {10,20}
       //v1 -> {30,40}
       v.erase(); //earse entire vector
       v.empty(); // check vector is empty or not
}
void explainList(){
    list<int> ls;
    ls.push_back(2); //{2}
    ls.emplace_back(4);//{2,4}
    ls.push.front(5); //{5,2,4}
    ls.emplace.front();//{2,4}
    //rest function as same as vector
}
void explainDeque(){
    deque<int> d;
    //All function are similar as vector 
    //Difference b/w vector and deque Deque allocates memory in smaller
    // chunks whereas in vectors, memory is allocated in contiguous memory locations.
}
void explainStack(){
    //Follows LIFO = last in first out
    stack <int>st;
    st.push(1);//{1}
    st.push(2);//{2,1}
    st.push(3);//{3,2,1}
    st.push(3);//{3,2,2,1}
    st.emplace(5);//{5,3,3,2,1}
    cout<<st.top()<<" ";//print 5
    st.pop();//{3,3,2,1}
    cout<<st.top()<<" ";//print 3
    cout<<st.size()<<" ";//print 4
    cout<<st.empty()<<" "; //print flase
    stack<int>s1,s2;
    s1.swap(s2);
}
void explainQuene(){
    //follows FIFO first in first out
    quene<int> q;
    q.push(1);//{1}
    q.push(4);//{1,4}
    q.emplace(5);//{1,4,5}
    q.back()+=5;//{1,4,9}
    cout<<q.back()<<" ";//print 9
    cout<<q.front()<<" ";//print 1
    q.pop(); //{2,9}
    cout<<q.front()<<" ";//print 2
    //size,empty and swap are same

}
void explainPQ(){
    priority_quene<int>pq;
}
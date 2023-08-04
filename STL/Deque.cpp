#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int>d;

    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    d.push_front(4);
    d.push_front(5);
    d.push_front(6);

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    
    d.pop_back();

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    
    d.pop_front();

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;


    cout<<"Element at 1st Index -> "<<d.at(1)<<endl;
    cout<<"First Element -> "<<d.front()<<endl;
    cout<<"Last Element -> "<<d.back()<<endl;
    cout<<"Empty or not -> "<<d.empty()<<endl;

    cout<<"Before clear size : "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After clear size : "<<d.size()<<endl;

    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

}
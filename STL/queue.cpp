#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("Swayam");
    q.push("Utkarsh");
    q.push("Tanishk");
    
    cout<<"Size of queue -> "<<q.size()<<endl;

    cout<<"Front -> "<<q.front()<<endl;

    q.pop();
    cout<<"After pop -> "<<q.front()<<endl;
    cout<<"Back -> "<<q.back()<<endl;
    cout<<"Size of queue -> "<<q.size()<<endl;
    cout<<"Empty or not -> "<<q.empty()<<endl;
    
    }
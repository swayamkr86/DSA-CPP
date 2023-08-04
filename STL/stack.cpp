#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;

    s.push("Swayam");
    s.push("Utkarsh");
    s.push("Tanishk");

    cout<<"Top Element -> "<<s.top()<<endl;

    s.pop();
    cout<<"Top Element -> "<<s.top()<<endl;
    cout<<"Size of Stack -> "<<s.size()<<endl;
    cout<<"Empty or not -> "<<s.empty()<<endl;
    
    }
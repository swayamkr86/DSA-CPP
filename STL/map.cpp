#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> m;
    
    m[1]="Swayam";
    m[13]="Utkarsh";
    m[2]="Tanishk";

    m.insert({5,"Bheem"});

    cout<<"Before erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding -> "<<m.count(13)<<endl;
    cout<<"Finding -> "<<m.count(-13)<<endl;

    m.erase(13);
    cout<<"After erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    auto it = m.find(5);

    for(auto i=it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }


}
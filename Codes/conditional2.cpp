#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Value of a and b is\n";
    cin>>a>>b;
    cout<<"a = "<<a<<" and "<<"b = "<<b<<endl;
    if(a>b){
        cout<<"A is greater\n";
    }
    if(b>a){
        cout<<"B is greater\n";
    }
}
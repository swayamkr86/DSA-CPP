#include<iostream>
using namespace std;

void fib(int n){
    int n1 = 0;
    int n2 = 1;
    int temp;
    cout<<"Fibonacci series upto n"<<endl;
    cout<<n1<<" ";
    cout<<n2<<" ";
    for(int i=0;i<=n-3;i++){
        temp=n1+n2;
        n1=n2;
        n2=temp;
        cout<<temp<<" ";
    }
    cout<<endl;
    cout<<"The "<<n<<"th term is : "<<temp;
}


int main(){
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    fib(n);

    return 0;
}
#include<iostream>
using namespace std;

int main(){
        
        int prod = 1;
        int sum = 0;
        int n;
        cout<<"Enter the value of n ";
        cin>>n;
        
        while(n!=0) {
            
            int digit = n%10;
            prod = prod * digit;
            sum = sum + digit;
            
            n = n/10;
        }
        
        int answer = prod - sum;
        cout<<"Answer is "<<answer;
    }
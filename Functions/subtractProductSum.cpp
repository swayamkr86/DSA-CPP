#include<iostream>
using namespace std;

int subtractProductAndSum(int n) {
        int pro = 1;
        int sum = 0;
        while(n!=0){
            int digit = n%10;
            pro = pro*digit;
            sum = sum+digit;
            n=n/10;
        }
        cout<<"Product is : "<<pro<<endl;
        cout<<"Sum is : "<<sum<<endl;
        int result=pro-sum;
        return result;
        
    }

int main(){
    int n;
    cout<<"Enter any value : ";
    cin>>n;
    cout<<"Answer is : "<<subtractProductAndSum(n);
}    
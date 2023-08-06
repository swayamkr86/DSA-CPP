#include<iostream>
using namespace std;

int bitwiseComplement(int n) {
        int b = n;
        int mask = 0;
        if(n==0){
            return 1;
        }
        while(b!=0){
            mask =(mask<<1)|1;
            b = b>>1;
        }
        int ans = (~n)&mask;
        return ans; 
        
    }

int main(){
    int n;
    cout<<"Enter any value : ";
    cin>>n;
    cout<<"Answer is : "<<bitwiseComplement(n);
}
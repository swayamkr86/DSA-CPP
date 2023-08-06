#include<iostream>
using namespace std;

int hammingWeight(int n) {
        int count = 0;
        while(n!=0){
            if(n&1){
                count++;
            }
            n=n>>1;
        }
        return count;
    }

int main(){
    int n;
    cout<<"Enter any value : ";
    cin>>n;
    cout<<"Total numbers of 1 bits : "<<hammingWeight(n)<<endl;
}     
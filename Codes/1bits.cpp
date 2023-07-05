#include<iostream>
using namespace std;

int sum_1bit(int count, int valueb){
    int sum = count+valueb;
    return sum;
}


int for_b(int b){
    int count = 0;
    while(b!=0){
        if(b&1){
            count++;
        }
        b=b>>1;
    }
    cout<<"Total number of 1 bit present in no.2 : "<<count<<endl;
    return count;
}



int digit(int a,int b){
    int count = 0;
    while(a!=0){
        if(a&1){
            count++;
        }
        a=a>>1;
    }
    cout<<"Total number of 1 bit present in no.1 : "<<count<<endl;
    int valueb = for_b(b);
    return sum_1bit(count,valueb);
}



int main(){
    int a;
    int b;
    cout<<"Enter the no.1 value : "<<endl;
    cin>>a;
    cout<<"Enter the no.2 value : "<<endl;
    cin>>b;

    int value = digit(a,b);
    cout<<"Total numbers of 1 bits : "<<value<<endl;

    return 0;

}
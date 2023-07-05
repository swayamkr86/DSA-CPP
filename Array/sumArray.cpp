#include<iostream>
using namespace std;

int sum(int arr[],int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum = arr[i]+sum;
    }
    return sum;
}


int main(){
    int arr[100];
    int size;
    cout<<"Enter the size of Array : ";
    cin>>size;
    
    cout<<"Enter your elements : "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    cout<<"Sum of all the Elements : "<<sum(arr,size)<<endl;


    return 0;
}
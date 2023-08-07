#include<iostream>
using namespace std;

int findUnique(int *arr, int size)
{
   	int ans = 0;
    
    for(int i = 0; i<size; i++) {
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[9]={1,3,1,3,6,6,7,10,7};
    int N = sizeof(arr) / sizeof(arr[0]);
    cout<<"Unique Element is : "<<findUnique(arr,N);
}
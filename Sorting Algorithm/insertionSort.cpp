#include<iostream>
#include<vector>
using namespace std;

void insertionSort(int n, vector<int> &arr){
    
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { // ruk jao
                break;
            }
            
        }
        //copy temp value
        arr[j+1] = temp;  
    }
    cout<<"Sorted vector :- "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl; 
}

int main(){
    
    vector<int> vect{30,70,10,20,80,50};
    insertionSort(6,vect);
    
    return 0;

}
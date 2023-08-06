#include<iostream>
#include<vector>
using namespace std;


void selectionSort(vector<int>& arr, int n)
{   
    for(int i = 0; i < n-1; i++ ) {
        int minIndex = i;
        
        for(int j = i+1; j<n; j++) {
            
            if(arr[j] < arr[minIndex]) 
                minIndex = j;
            
        }
        swap(arr[minIndex], arr[i]);
    }
    cout<<"Sorted vector :- "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    
    vector<int> vect{30,70,10,20,80,50};
    selectionSort(vect,6);
    
    return 0;

}
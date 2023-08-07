#include<iostream>
#include<vector>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i = 0, j = 0;
    vector<int> ans;
    while(i<n && j<m) {
    
    if(arr1[i]==arr2[j])
    {
    	ans.push_back(arr1[i]);
        i++;
        j++;
    }
    else if (arr1[i] < arr2[j]) {
  		i++;
    }
    else
    {
    	j++;
    }
    
    }
    
    for(int i:ans){
        cout<<i<<" ";
    }
    
    return ans;
}

int main(){
    vector<int> vect1{1,2,2,2,3,4};
    vector<int> vect2{2,2,3,3};
    findArrayIntersection(vect1,6,vect2,4);
}
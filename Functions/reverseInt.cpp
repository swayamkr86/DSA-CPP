#include<iostream>
#include<climits>
using namespace std;

int reverse(int x) {
        int ans = 0;
        int m =0;
        while(x!=0){
            if(ans>INT_MAX/10 || ans<INT_MIN/10){
                return 0;
            }
            m=x%10;
            ans = ans*10 +m;
            x=x/10;
        }
        return ans;
    }

int main(){
    int x;
    cout<<"Enter any value : ";
    cin>>x;
    cout<<"Reverse value : "<<reverse(x);
    
}
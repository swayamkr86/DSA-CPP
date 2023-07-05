#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the value of A : ";
    cin>>a;

     if(a>0){
         cout<<"A is positive\n";
     }
     else if(a<0){
         cout<<"A is negative\n";
     }
     else{
         cout<<"A is 0";
     }
}
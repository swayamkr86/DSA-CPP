#include<iostream>
#include<math.h>
using namespace std;


int main() {

    int n;
    cout<<"Enter the value of n: ";
    cin >> n;

    float ans  = 0;     // Offline compiler issue maybe
    int i = 0;
    while(n != 0 ) {

        int bit  = n & 1;

        ans = (bit * pow(10, i) ) + ans;

        n = n >> 1;
        i++;
        }

    cout<<"Answer is " << ans << endl;
}
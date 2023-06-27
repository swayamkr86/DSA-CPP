#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    int count = 0;
    int row = 1;

    while(row <= n) {

        //space print karlo
        int space = n - row;
        while(space) {
            cout<<" ";
            space = space - 1;
        }

        //stars print karlo
        int col = 1;
        count = count + 1;
        while( col <= row ) {
            cout<<count;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}
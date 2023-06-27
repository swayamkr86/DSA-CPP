#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int row = 1;

    while(row <= n) {

        //space print karlo
        int space = row - 1;
        while(space) {
            cout<<" ";
            space = space - 1;
        }

        //stars print karlo
        int col = 1;
        int star = n - row + 1;
        while( col <= star ) {
            cout<<"*";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}
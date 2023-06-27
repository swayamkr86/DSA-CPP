#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    int count = 0;
    int total = 0;
    int row = 1;
    while(row <= n) {

        //space print karlo
        int space = row - 1;
        while(space) {
            cout<<" ";
            space = space - 1;
        }

        //stars print karlo

        int star = n - row + 1;
        int col = 1;
        total = total + 1;
        count = total;
        while( col <= star ) {
            cout<<count;
            count = count + 1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}
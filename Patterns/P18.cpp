#include <iostream>
using namespace std;

int main () {
  int n;
  cin>>n;
  int i = 1;
  while(i<=n) {

    //1st triangle(12345)

    int j = 1;
    while(j<=n-i+1) {
      cout<<j;
      j= j+1;
    }
    
    //2nd triangle (star)

    int star = i -1;
    while(star) {
      cout<< "*";
      star = star - 1;
    }

    //3rd triangle (star)

    int star2 = i -1;
    while(star2) {
      cout<< "*";
      star2 = star2 - 1;
    }

    //4th triangle (54321)

    int j2 = n-i+1;
    while(j2) {
      cout<<j2;
      j2= j2-1;
    }

    cout<<endl;
    i = i +1;
  }
}
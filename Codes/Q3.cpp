#include <iostream>
using namespace std;

int main()
{
    int a=1;
    int b=2;

    if(a-- > 0 || ++b > 2){
        cout<<"Stage1 - Inside If \n";
    }
    else{
        cout<<"Stage2 - Inside else \n";
    }
    cout<<a<<" "<<b<<endl;
}
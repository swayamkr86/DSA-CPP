#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(1){
        switch (n){
            case 1: cout <<"bla"<< endl;
            break;
            case 2: cout << "int" << endl;
            default: cout << "defalut" << endl;
        }
        exit(0);    //returned to the operating system
        cout<<"finish"<<endl;
    }
    cout<<"Finish"<<endl;
    return 0;
}
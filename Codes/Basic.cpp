#include<iostream>
using namespace std;
int main(){
    cout<<"Hello world\n";
    /*
    cout<<"Hello world"<<endl;             for new line 
    cout<<"Hello world"<<'\n';
    cout<<"Hello world\n";
    cout<<"\n";
    */

   int a = 25;                // similarly float , double
   cout<<a<<endl;

   char b = 'a';
   cout<<b<<endl;

   bool bl = true;
   cout<<bl<<endl;

   bool bl2 = false;
   cout<<bl2<<endl;

   int size = sizeof(a);
   cout<<"Size of a is : "<<size<<endl;

   int c = 'c';       //ASCII value
   cout<<c<<endl;

   char ch = 98;
   cout<<ch<<endl;

   int d = 2;
   int e = 3;
   int f = 3;
   bool first = (d==e);
   bool second = (e==f);
   bool third = (d<=e);
   bool fourth = (d!=e);
   cout<<first<<endl;
   cout<<second<<endl;
   cout<<third<<endl;
   cout<<fourth<<endl;

   int g = 21;
   cout<<!g<<endl;

   int h = 0;
   cout<<!h<<endl;

   cout<<"Taking input : ";
   int k = cin.get();
   cout<<"ASCII value of any character or space or digits or enter : "<<k<<endl;
}
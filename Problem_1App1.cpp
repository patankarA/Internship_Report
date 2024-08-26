#include<iostream>
using namespace std;
int main()
{
    int p = 6 , q = 9 , r = 5 , s = 2;
    char a[10];
    // take input string
    cout<<"enter a string"<<endl;
    cin>>a;
    int m;
    // use if statement for each character 
    if(a[2]=='p') m = p;
    if(a[2]=='q') m = q;
    if(a[2]=='r') m = r;
    if(a[2]=='s') m = s;
    if(a[0]=='p') p = m;
    if(a[0]=='q') q = m;
    if(a[0]=='r') r = m;
    if(a[0]=='s') s = m;
    // print values.
    cout<<p<<" "<<q<<" "<<r<<" "<<s<<endl;
  
    return 0;
}

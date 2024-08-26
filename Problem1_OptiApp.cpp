#include<iostream>
using namespace std;
int main()
{
    int p = 6 , q = 9 , r = 5 , s = 2;
    int arr[4] = {p, q, r, s};
    char a[10];
    cout<<"enter a string"<<endl;
    cin>>a;
    arr[ a[0] - 'p' ] = arr[  a[2] - 'p' ];
    for( int i = 0; i < 4; i++ )
        cout<<arr[i]<<" ";
  
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int p=4, q=3, r=5, s=7;
    int arr[4] = {p,q,r,s};
    while(1)
    {
        cout<<"enter a string"<<endl;
        char a[10];
        cin>>a;

        // Input is of the type p=1, q=4 ...
        if(a[2]>=48 && a[2]<=57)
        {
            arr[a[0]-'p']= a[2]-48;
        }
        // input is of the type p=q, r=s …
        else  
        {
            arr[a[0]-'p']= arr[a[2]-'p'];
        }

        //  print updated values
        for(int i=0; i<4; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }
return 0;

}


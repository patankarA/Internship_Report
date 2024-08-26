#include <iostream>
using namespace std;
int main() 
{
    int zw[4][20] = {0};
    zw[0][0]=1;
    zw[1][0]=2;
    zw[2][0]=3;
    zw[3][0]=4;
    while(1)
    {
        cout<<"enter a string"<<endl;
        char ch[20];
        cin>>ch;
        int t = ch[1]-48, dist = ch[4]-48, x=ch[3]-'p', u;
        if(ch[3]-48 < 64 )
            u=ch[3]-48;
        else
        {
            while(zw[x][dist]==0)
            {
                     dist--;
            }
            u=zw[x][dist];
        }
        zw[ch[0]-'p'][t] = u;
        // print values
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<20;j++)
                 cout<<zw[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
 }


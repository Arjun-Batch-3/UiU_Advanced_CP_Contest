#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int  c=0;
    while(n--)
    {
        char s;
        cin>>s;
        if(s=='R')
        {
            int n;
            cin>>n;
            c=c+n;
        }
        else if(s=='T')
        {
            cout<<c<<endl;
        }
    }
    return 0;
}
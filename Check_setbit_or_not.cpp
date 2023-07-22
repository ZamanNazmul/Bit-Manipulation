#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int val,pos;
        cin>>val>>pos;
        if((val &(1<<pos)))
        {
            cout<<"Set bit"<<endl;
        }
        else 
        {
            cout<<"Not set bit"<<endl;
        }
    }
}

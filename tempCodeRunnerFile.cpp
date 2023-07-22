// NAZMUL ZAMAN _BSC in IT
#include <bits/stdc++.h>
#include<string.h>
using namespace std; 
#define ll long long 
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define lop(i,n) for(int i=0;i<n;i++)
#define lop1(i,n) for(int i=1;i<=n;i++)
//printf(a[0] == mn ? "Bob\n" : "Alice\n");
int main()
{
    int t =1 ;
    while(t--)
    {


    
    int n;
    cin>>n;
    vector<int>v(n);
    lop(i,n)
    {
        cin>>v[i];
    }

    bool ans = false;
    ll sum  = 0 ;
    for(int i = 0; i <= ((1<<n)-1) ; i++) // 2^n-1
    {
        for(int j = 0 ; j<n; j++)
        {
            if((i & (1<<j)) == 1)
            {
                sum+= v[j];
                sum%= 360;
            }
            else
            {
                sum-= v[j];
                sum%= 360;
            } 
        }

        if(sum % 360 == 0)
            {
                ans = true;
            } 
    }
    
    if(ans)yes;
    else no;

    }
}
// int main()
// {
//     int t = 1;
//     while(t--)
//     {
//         solve();
//     }
    
// }
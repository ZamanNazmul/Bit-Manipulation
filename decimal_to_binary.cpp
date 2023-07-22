
// Decimal number to Binary number conversiton code 
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int decimal_number;
    cin>>decimal_number;

    string binaray_number = " ";

    while(decimal_number>0)
    {
        binaray_number+=((decimal_number % 2)+'0');
        decimal_number /= 2;
    }
    reverse(binaray_number.begin(),binaray_number.end());
    cout<<"This is the binary digit of deciaml number : "<<binaray_number<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0 ;
}
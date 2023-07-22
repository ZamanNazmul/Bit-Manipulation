// Binary number to deciaml number conversiton code 
#include<bits/stdc++.h>
using namespace std;
void solve()

string binary_number = ""; 
cin >> binary_number;
reverse(binary_number.begin(), binary_number.end());
int bsize = binary_number.size();
int decimal_number = 0;
for (int pos = 0; pos < bsize; ++pos) { 
  decimal_number = decimal_number + ((binary_number[pos] - '0') * pow(2, pos));
}
cout << decimal_number << '\n'
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
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
cin >> n;
int arr[n];
for (int pos = 0; pos < n; ++pos) { 
  cin >> arr[pos];
}
int unique_val = 0;
for (int pos = 0; pos < n; ++pos) { 
  unique_val = unique_val ^ arr[pos];
}
cout << unique_val << '\n';

}

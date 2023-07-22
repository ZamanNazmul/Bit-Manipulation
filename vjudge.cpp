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
ll a, b, o = 1;

bool all(ll t, ll a, ll b) {
	return (a&t) && (b&t) && (b - a) < t;
}

int main() {
	    int n; 
        cin>>n;
        lop1(i,n) { 
        cin>>a>>b;
		ll ans = 0;
		for(int i = 0; i < 100; ++i) {
			ll t = o << i;
            
			if(all(t, a, b)) ans |= t;
		}
        cout<<ans<<endl;
	}
	return 0;

}
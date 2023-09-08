
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll a,b;
    cin>>a>>b;
    vector<ll>ar;
    ll x = abs(a-b);
ll n=x;
    ll r=n%10;

    if(r==9)
        x--;
    else x++;


    cout<<x<<endl;
    return 0;
}

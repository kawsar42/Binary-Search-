#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(ll i=0; i<n; i++)
    {
        cin >> v[i];
    }
    ll l=0,r=n-1;
    ll x;
    cin >> x;
    ll cnt=0;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(v[mid]==x)
        {
            cout << "X is Found: " << endl;
            cout << "value: " <<  v[mid] << " " << index:" << mid << endl;
            return ;

        }
        else if(v[mid]<x)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }

    }
    if(cnt==1) cout << "YES" << endl;
    else  cout << "X is not found" << endl;

}
int main()
{
    solve();
    return 0;
}

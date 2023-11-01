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
    sort(v.begin(),v.end());
    ll l=0,r=n-1;
    ll x;
    cin >> x;
    ll res=-1;
    while(l<=r)
    {

        ll mid=(l+r)/2;
        if(v[mid]==x)
        {
            res=mid;
            r=mid-1;
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
    cout << (res+1) << endl;

}
int main()
{
    solve();
    return 0;

}

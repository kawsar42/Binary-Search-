/* find the the value from reverse sorted order*/
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
    sort(v.rbegin(),v.rend());
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
            cout << "value: " <<  v[mid] << " " << " index:" << mid << endl;
            return ;
        }
        else if(v[mid]<x)
        {
            r=mid-1;
        }
        else if(x<v[mid])
        {
            l=mid+1;
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
/*
6
 1 2 6 6 2 3
 2



*/

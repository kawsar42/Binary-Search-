/* Count of an Element in Sorted array */
#include<bits/stdc++.h>
using  namespace  std;
int ar[10000];
int n;
int first(int x)
{
    int res=-1;
    int l=0,r=n-1,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(x==ar[mid])
        {
            res=mid;
            r=mid-1;
        }
        else if(x>ar[mid])l=mid+1;
        else r=mid-1;
    }
    return res;
}
int last(int x)
{
    int res=-1;
    int l=0,r=n-1,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(x==ar[mid])
        {
            res=mid;
            l=mid+1;
        }
        else if(x>ar[mid])l=mid+1;
        else r=mid-1;
    }
    return res;
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)cin>>ar[i];
    sort(ar,ar+n);
    int x;
    cin>>x;
    int a=first(x);
    int b=last(x);
    cout << a << " " << b << endl;
    int ans=(b-a+1);
    cout<<ans<<endl;
    return 0;
}
/*
8
1 2 3 4 4 4 4 5

*/

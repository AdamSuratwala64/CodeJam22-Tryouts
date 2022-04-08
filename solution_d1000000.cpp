#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int x)
{
    ll size, count = 0;
    cin>>size;
    ll arr[size];
    for(register ll i = 0; i < size; i++)
        cin>>arr[i];
    sort(arr, arr+size);
    for(register ll i = 0; i < size; i++)
        if(arr[i] > count)
            count++;
    cout<<"Case #"<<x<<": "<<count<<endl;
}

int main(void)
{
    int t, x = 0;
    cin>>t;
    while(x++ < t)
        solve(x);
}
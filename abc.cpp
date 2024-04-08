#include <bits/stdc++.h>
using namespace std;
typedef long double ll;
void solve()
{
    ll x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    ll dis1=sqrt(x1*x1+y1*y1);
    ll dis2=sqrt(x2*x2+y2*y2);
    if(dis1<dis2)
    cout<<"Russo"<<endl;
    else if(dis1>dis2)
    cout<<"Wil"<<endl;
    else
    cout<<"Empate"<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
}
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    ll n;
    vector<ll> l;
    l.push_back(2);
    l.push_back(1);
    cin >> n;
    rep(i,n)
    {
        l.push_back(l[i]+l[i+1]);
        //cout << l[i] << endl;
    }
    cout << l[n] << endl;


}

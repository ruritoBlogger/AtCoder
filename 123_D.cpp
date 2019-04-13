#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    ll x,y,z,k;
    cin >> x >> y >> z >> k;
    vector<ll> a(x);
    rep(i,x) cin >> a[i];
    vector<ll> b(y);
    rep(i,y) cin >> b[i];
    vector<ll> c(z);
    rep(i,z) cin >> c[i];
    sort(all(a),greater<ll>());
    sort(all(b),greater<ll>());
    sort(all(c),greater<ll>());
    ll A = 0;
    ll B = 0;
    ll C = 0;
    
    bool flagA = true;
    bool flagB = true;
    bool flagC = true;
    rep(i,k)
    {
        cout << a[A] + b[B] + c[C] << endl;
        if(A == x-1) flagA = false;
        if(B == y-1) flagB = false;
        if(C == z-1) flagC = false;
        if(flagA && a[A]-a[A+1] < b[B]-b[B+1] && a[A]-a[A+1] < c[C]-c[C+1]) A++;
        else if(flagB && a[A]-a[A+1] > b[B]-b[B+1] && b[B]-b[B+1] < c[C]-c[C+1]) B++;
        else C++;
    }
}

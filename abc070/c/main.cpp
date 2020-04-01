#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

ll gcd(ll x, ll y)
{
	return y==0 ? x:gcd(y,x % y);
}

ll lcm(ll number1,ll number2){
	return number1 / gcd(number1,number2) * number2;	
}


int main()
{
    int N;
    cin >> N;
    vector<ll> T(N);
    rep(i,N) cin >> T[i];
    ll ans = T[0];
    for( ll i = 1;i < N;i++)
    {
        ans = lcm(ans, T[i]);
    }
 
    cout << ans << endl;
        
 
}

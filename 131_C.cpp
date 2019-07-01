#include<bits/stdc++.h>
#include <numeric>
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
	return number1 * number2 / gcd(number1,number2);	
}

int main()
{
    ll A,B,C,D;
    cin >> A >> B >> C >> D;
    
    ll ans = 0;
    ll kouyakusuu = lcm(C,D);
    
    ll waruC = A + A%C;
    ll waruD = A + A%D;
    ll waruCD = A + A%kouyakusuu;
    
    if(A%C == 0) ans += B/C - A/C + 1;
    else ans += B/C - A/C;
    if(A%D == 0) ans += B/D - A/D + 1;
    else ans += B/D - A/D ;
    if(A%kouyakusuu == 0) ans  -= B/kouyakusuu - A/kouyakusuu + 1;
    else ans  -= B/kouyakusuu - A/kouyakusuu;

    cout << B-A+1-ans << endl;
}

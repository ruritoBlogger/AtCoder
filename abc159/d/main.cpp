#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define INF 99999999
#define INF_LL 1LL << 60
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, a, n) for(int i = a; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
 
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
 
template < typename T > std::string to_string( const T& n )
{
    std::ostringstream stm ;
    stm << n ;
    return stm.str() ;
}
 
ll nCr(ll n,ll r){
    if(r==1)return n;
    if(r==2)return n*(n-1)/2;
    return n*(n-1)*(n-2)/6;
}
 
int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    vector<ll>nums(N,0);
    rep(i,N)
    {
        cin >> A[i];
        nums[A[i]-1]++;
    }
    ll total = 0;
    rep(i, nums.size())
    {
        if( nums[i] > 1 ) total += nCr(nums[i],2);
    }
 
    rep(i,N)
    {
        ll ans = total;
        if( nums[A[i]-1]-1 > 1 )
        {
            ans -= nCr(nums[A[i]-1],2);
            ans += nCr(nums[A[i]-1]-1,2);
        }
        else ans -= nCr(nums[A[i]-1],2);
        cout << ans << endl;
    }
}

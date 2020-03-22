#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define MOD (ll)1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

template < typename T > std::string to_string( const T& n )
{
    std::ostringstream stm ;
    stm << n ;
    return stm.str() ;
}

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }


int main()
{
    int N;
    cin >> N;

    vector<int> first(N);
    rep(i,N) cin >> first[i];
    vector<int> second(N);
    rep(i,N) cin >> second[i];

    vector<int> a;
    rep(i,N) a.push_back(i+1);
    
    ll i = 1;
    ll first_pos = 1; 
    ll second_pos = 1; 
    do
    {
        if( a == first ) first_pos = i;
        if( a == second ) second_pos = i;
        i++;
    } while(next_permutation(all(a)));
    cout << abs(first_pos-second_pos) << endl;
}

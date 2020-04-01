#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF_LL 1LL << 60
#define INF 99999999
#define MOD (ll)1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, a, n) for(int i = a; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

void put_double(double obj){printf("%.12f\n",obj);};

template < typename T > std::string to_string( const T& n )
{
    std::ostringstream stm ;
    stm << n ;
    return stm.str() ;
}

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

template <typename T> T mod_pow(T n, T r, T m)
{
	T ret = 1;
	T tmp = n;
	
	while(r != 0) {
		if(r % 2) {
			ret *= tmp;
		}
		tmp *= tmp;
		tmp %= m;
		ret %= m;
		r /= 2;
	}
	return ret;
}


int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    rep(i,N) cin >> A[i];

    multiset<int> key;
    set<int> roop_key;
    rep(i,N)
    {
        key.insert(A[i]);
        roop_key.insert(A[i]);
    }

    bool flag=true;
    for( set<int>::iterator it = roop_key.begin(); it != roop_key.end(); it++ )
    {
        if( key.count( *it ) != 2 )
        {
            if(flag && *it==0) flag=false;
            else
            {
                cout << 0 << endl;
                return 0;
            }
        }

        if( N%2==0 && (*it+2)%2==0 )
        {
            cout << 0 << endl;
            return 0;
        }
        else if( N%2!=0 && (*it+2)%2!=0 )
        {
            cout << 0 << endl;
            return 0;
        }
    }

    if( flag && N%2==0 ) cout << mod_pow( (ll)2, (ll)N/2, MOD ) << endl;
    else if( !flag && N%2!= 0 ) cout << mod_pow( (ll)2, (ll)(N-1)/2, MOD ) << endl;

}

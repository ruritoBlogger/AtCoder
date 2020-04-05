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


int main()
{
    int X,Y,Z,K;

    cin >> X >> Y >> Z >> K;

    vector<ll> A(X);
    priority_queue<ll> que_A;
    rep(i,X)
    {
        cin >> A[i];
        que_A.push(A[i]);
    }

    vector<ll> B(Y);
    priority_queue<ll> que_B;
    rep(i,Y)
    {
        cin >> B[i];
        que_B.push(B[i]);
    }

    vector<ll> C(Z);
    priority_queue<ll> que_C;
    rep(i,Z)
    {
        cin >> C[i];
        que_C.push(C[i]);
    }
    
    sort(all(A),greater<ll>());
    sort(all(B),greater<ll>());
    sort(all(C),greater<ll>());

    vector<ll> tmp;

    rep(i,min(X,K))
    {
        rep(j,min(Y,K))
        {
            tmp.push_back(A[i] + B[j]);
        }
    }

    sort(all(tmp),greater<ll>());

    vector<ll> ans;

    rep(i,min((int)tmp.size(),K))
    {
        rep(j,min(K,Z))
        {
            //cout << tmp[i] << " " << C[j] << endl;
            ans.push_back(tmp[i] + C[j]);
        }
    }
    sort(all(ans),greater<ll>());
    rep(i,K) cout << ans[i] << endl;
}

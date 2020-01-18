#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

vector<pair<ll, ll> >xl;
int N;

int main()
{
    cin >> N;
   
    priority_queue<pair<ll, ll>, vector<pair<ll, ll> >,greater<pair<ll, ll> > > q;
    rep(i,N)
    {
        ll tmp,tmp2;
        cin >> tmp >> tmp2;
        q.push( make_pair(tmp, tmp2) );
    }

    vector<int> a;
    rep(i,N) a.push_back(i);
    
    priority_queue<pair<ll, ll>, vector<pair<ll, ll> >,greater<pair<ll, ll> > > q2 = q;
    
    ll ans = 0;
    
    rep(i,N)
    {
    } 
}

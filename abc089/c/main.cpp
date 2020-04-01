#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    ll N;
    cin >> N;
    multiset<char> S;
    rep(i,N)
    {
        string tmp;
        cin >> tmp;
        S.insert(tmp[0]);
    }
    /*
    for(multiset<char>::iterator itr = S.begin(); itr != S.end(); ++itr)
    {
        cout << *itr << endl;
    }
    */

    size_t m_count = S.count('M');
    size_t a_count = S.count('A');
    size_t r_count = S.count('R');
    size_t c_count = S.count('C');
    size_t h_count = S.count('H');
    //cout << m_count << " " << a_count << " " << r_count << " " << c_count << " " << h_count << endl;
    
    vector<ll> tmp;
    if( m_count != 0 ) tmp.push_back(m_count);
    if( a_count != 0 ) tmp.push_back(a_count);
    if( r_count != 0 ) tmp.push_back(r_count);
    if( c_count != 0 ) tmp.push_back(c_count);
    if( h_count != 0 ) tmp.push_back(h_count);

    if( tmp.size() < 3 ) cout << 0 << endl;
    else if(tmp.size() == 3)
    {
        ll ans = 1;
        ll TMP = 0;
        rep(i,tmp.size())
        {
            ans *= tmp[i];
            TMP += tmp[i];
        }
        if( ans > TMP )  cout << TMP << endl;
        else  cout << ans << endl;
    }
    else if(tmp.size() == 4)
    {
        ll ans = 0;
        ans += tmp[0] * ( tmp[1] * tmp[2] + tmp[1] * tmp[3] + tmp[2] * tmp[3] );
        ans += tmp[1] * tmp[2] * tmp[3];
        cout << ans << endl;
    }
    else
    {
        ll ans = 0;
        ans += tmp[0] * ( tmp[1] * tmp[2] + tmp[1] * tmp[3] + tmp[1] * tmp[4] +
                          tmp[2] * tmp[3] + tmp[2] * tmp[4] + tmp[3] * tmp[4]);

        ans += tmp[1] * ( tmp[2] * tmp[3] + tmp[2] * tmp[4] + tmp[3] * tmp[4] );
        ans += tmp[2] * tmp[3] * tmp[4];

        cout << ans << endl;
    }
}

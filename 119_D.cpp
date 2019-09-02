#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

vector<ll>s;
vector<ll>t;
vector<ll>x;

ll near( ll num )
{
    ll back = std::lower_bound(t.begin() + 1, t.end() - 1, num) - t.begin();
    ll front = back - 1;
    ll x = t[front] - num;
    ll y = t[back] - num;
    
    ll tmp;
    if( fabs(x) < fabs(y) ) tmp = t[front];
    else tmp = t[back];
    ll tmpAns = 0;

    tmpAns += abs(num - tmp);
    back = std::lower_bound(s.begin() + 1, s.end() - 1, tmp) - s.begin();
    front = back - 1;
    x = s[front] - tmp;
    y = s[back] - tmp;
    if( fabs(x) < fabs(y) ) tmpAns += fabs(s[front] - tmp);
    else tmpAns += fabs(s[back] - tmp);
    //cout << "tmp is " << tmp << " and tmpAns is " << tmpAns << endl;

    back = std::lower_bound(s.begin() + 1, s.end() - 1, num) - s.begin();
    front = back - 1;
    x = s[front] - num;
    y = s[back] - num;
    ll tmp2;
    if( fabs(x) < fabs(y) ) tmp2 = s[front];
    else tmp2 = s[back];
    ll tmpAns2 = 0;

    tmpAns2 += fabs(num - tmp2);
    back = std::lower_bound(t.begin() + 1, t.end() - 1, tmp2) - t.begin();
    front = back - 1;
    x = t[front] - tmp2;
    y = t[back] - tmp2;
    if( fabs(x) < fabs(y) ) tmpAns2 += fabs(t[front] - tmp2);
    else tmpAns2 += fabs(t[back] - tmp2);
    //cout << "tmp2 is " << tmp2 << " and tmpAns2 is " << tmpAns2 << endl;
    return min(tmpAns, tmpAns2);
}

int main()
{
    int A,B,Q;
    cin >> A >> B >> Q;

    s.resize(A);
    t.resize(B);
    x.resize(Q);

    rep(i,A) cin >> s[i];
    rep(i,B) cin >> t[i];
    rep(i,Q) cin >> x[i];

    rep(i,Q)
    {
        cout << near(x[i]) << endl;
    }
}

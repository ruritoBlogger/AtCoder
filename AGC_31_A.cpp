#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int n;
    ll waru = 1e+9 + 7;
    string s;
    cin >> n >> s;
    vector<char>a(s.begin(),s.end());
    ll tmp = 0;
    for(ll i = 0;i < s.size();i++)
    {
        vector<char>::iterator itr = find(a.begin(), a.end(), s[i]);
        size_t index = distance( a.begin(), itr );
        if (index != a.size()) tmp++;
    }
    int tmp2 = 1;
    if(tmp!=0)tmp2++;
    cout << pow(2,n) << " tmp2 is " << tmp2 << " and tmp is " << pow(2,tmp) << endl;
    ll ans = pow(2,n) - tmp2 - pow(2,tmp);
    cout << ans << endl;
}

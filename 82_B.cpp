#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    string s,t;
    cin >> s >> t;

    sort(all(s),greater<char>());
    sort(all(t));
    cout << (int)t[0] << " " << (int)s[0] << endl;
    if((int)t[0] >= (int)s[0]) cout << "Yes" << endl;
    else cout << "No" << endl;
}

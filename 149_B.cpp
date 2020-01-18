#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int N;
    string s,t;
    cin >> N >> s >> t;

    rep(i,N)
    {
        cout << s[i] << t[i];
    }
    cout << endl;
}

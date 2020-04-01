#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int N;
    string s;
    cin >> N >> s;
    int ans = 0;
    rep(i,N-2)
    {
        if(s[i] == 'A' && s[i+1]=='B' && s[i+2]=='C') ans++;
    }
    cout << ans << endl;
}

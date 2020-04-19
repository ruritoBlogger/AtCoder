#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int n,k;
    string s;
    cin >> n >> s >> k;
    rep(i,s.size())
    {
        if(s[i] != s[k-1]) cout << "*";
        else cout << s[i];
    }
    cout << endl;
}

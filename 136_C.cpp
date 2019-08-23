#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int N;
    cin >> N;
    vector<ll> H(N);
    rep(i,N) cin >> H[i];
    
    ll key = H[0] - 1;
    for(int i = 1;i < N;i++)
    {
        if(H[i] == key)continue;
        else if(H[i] > key) H[i]--;
        else
        {
            cout << "No" << endl;
            return 0;
        }
        key = H[i];
    }
    cout << "Yes" << endl;
}

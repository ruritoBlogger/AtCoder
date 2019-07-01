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

    vector<int> d(N);
    rep(i,N) cin >> d[i];

    sort(all(d));
    cout << d[d.size()/2] - d[d.size()/2-1] << endl;
}

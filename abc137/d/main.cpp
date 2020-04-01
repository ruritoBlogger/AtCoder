#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int N,M;
    cin >> N >> M;

    vector<pair<int, int> > A(N);
    rep(i,N) cin >> A[i].second >> A[i].first;
    sort(all(A),greater<pair<int, int> >());
    rep(i,N) cout << A[i].second << " " << A[i].first << endl;



}

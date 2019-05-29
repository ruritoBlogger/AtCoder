#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()


int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> L(m);
    vector<int> R(m);
    rep(i,m)
    {
        cin >> L[i] >> R[i];
    }
    sort(all(L),greater<int>());
    sort(all(R));
    
    if(R[0] - L[0] >= 0) cout << R[0] - L[0] + 1 << endl;
    else cout << 0 << endl;


    //rep(i,m) cout << l[i].first << "      " <<  l[i].second << endl;


}

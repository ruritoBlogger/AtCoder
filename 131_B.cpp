#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int N,L;

    cin >> N >> L;
    
    vector<int> a;
    ll minus = INF;
    for(int i = 1;i < N+1;i++)
    {
        a.push_back(L+i-1);
        if(abs(minus) > abs(L+i-1)) minus = L+i-1;
    }
    ll sum = 0;
    rep(i,a.size()) sum += a[i];
    cout << sum-minus << endl;

}

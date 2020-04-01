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
    vector<int>a(N);
    rep(i,N) cin >> a[i];

    int Alice = 0;
    int Bob = 0;
    sort(all(a),greater<int>());
    rep(i,N)
    {
        if((i+2)%2==0) Alice += a[i];
        else Bob += a[i];
    }
    cout << Alice - Bob << endl;
}

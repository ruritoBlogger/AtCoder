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
    vector<ll> A(N);
    rep(i,N)
    {
        cin >> A[i];
    }
    sort(all(A));
    ll i = 1;
    for(i; pow(2,i) < A[0]+1; i ++)
    {
        rep(j,N)
        {
            if(A[j]%(int)pow(2,i) != 0)
            {
                cout << i - 1 << endl;
                return 0;
            }
        }
    }
    cout << i - 1 << endl;
}

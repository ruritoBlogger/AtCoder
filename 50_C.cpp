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
    rep(i,N) cin >> A[i];
    ll waru = 10e9+7;
    sort(all(A));
    if( (N+2)%2 == 0)
    {
        for( ll i = 0;i < N;i += 2 )
        {
            if(A[i] != i+1 || A[i+1] != i+1)
            {
                //cout << "a[i] " << A[i] << " and A[i+1] " << A[i+1] << " and i " << i << endl;
                cout << 0 << endl;
                return 0;
            }
        }
        ll tmp = pow(2,N/2);
        cout << tmp%waru << endl;
    }
    else
    {
        if( A[0] != 0 )
        {
            cout << 0 << endl;
            return 0;
        }

        for( ll i = 1;i < N;i += 2 )
        {
            if(A[i] != i+1 || A[i+1] != i+1)
            {
                //cout << "a[i] " << A[i] << " and A[i+1] " << A[i+1] << " and i " << i << endl;
                cout << 0 << endl;
                return 0;
            }
        }
        ll tmp = pow(2,(N-1)/2);
        cout << tmp%waru << endl;

    }
    

}
